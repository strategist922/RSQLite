#include "SqliteConnection.h"


SqliteConnectionWrapper::SqliteConnectionWrapper(std::string path, bool allow_ext, int flags, std::string vfs)
  : pConn_(NULL) {

  // Get the underlying database connection
  int rc = sqlite3_open_v2(path.c_str(), &pConn_, flags, vfs.size() ? vfs.c_str() : NULL);
  if (rc != SQLITE_OK) {
    Rcpp::stop("Could not connect to database:\n%s", getException());
  }
  if (allow_ext) {
    sqlite3_enable_load_extension(pConn_, 1);
  }
}

SqliteConnectionWrapper::~SqliteConnectionWrapper() {
  try {
    sqlite3_close_v2(pConn_);
  } catch (...) {}
}

int SqliteConnectionWrapper::getExceptionCode() const {
  if (pConn_ != NULL)
    return sqlite3_errcode(pConn_);
  else
    return 0;
}

std::string SqliteConnectionWrapper::getException() const {
  if (pConn_ != NULL)
    return std::string(sqlite3_errmsg(pConn_));
  else
    return std::string();
}

void SqliteConnectionWrapper::copy_to(SqliteConnectionPtr pDest) {
  sqlite3_backup* backup =
    sqlite3_backup_init(pDest->conn(), "main", pConn_, "main");
  
  int rc = sqlite3_backup_step(backup, -1);
  if (rc != SQLITE_DONE) {
    Rcpp::stop("Failed to copy all data:\n%s", getException());
  }
  rc = sqlite3_backup_finish(backup);
  if (rc != SQLITE_OK) {
    Rcpp::stop("Could not finish copy:\n%s", getException());
  }
}
