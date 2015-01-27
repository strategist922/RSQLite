#include <Rcpp.h>
#include <RSQLite.h>
using namespace Rcpp;

// [[Rcpp::export]]
XPtr<SqliteResult> rsqlite_send_query(XPtr<SqliteConnection> con, std::string sql) {
  SqliteConnection* conn = (SqliteConnection*) R_ExternalPtrAddr(con);
  SqliteResult* res = new SqliteResult(conn, sql);
  return XPtr<SqliteResult>(res, true);
}

// [[Rcpp::export]]
void rsqlite_clear_result(XPtr<SqliteResult> res) {
  if (R_ExternalPtrAddr(res) == NULL) stop("Results already closed");
  
  SqliteResult* ress = (SqliteResult*) R_ExternalPtrAddr(res);
  delete ress;
  R_ClearExternalPtr(res);
}
