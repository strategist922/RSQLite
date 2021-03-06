get_stage("after_success") %>%
  add_step(step_hello_world()) %>%
  add_step(step_run_covr(
    exclusions = c(
      "src/vendor/sqlite3/sqlite3.c",
      "src/vendor/sqlite3/extension-functions.c"
    )
  ))

if (ci()$get_branch() == "production" && Sys.getenv("BUILD_PKGDOWN") != "") {
  get_stage("deploy") %>%
    add_step(step_install_ssh_keys()) %>%
    add_step(step_test_ssh())
    add_step(step_build_pkgdown()) %>%
    add_step(step_push_deploy(path = "docs", branch = "gh-pages"))
}
