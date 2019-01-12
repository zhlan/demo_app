# demo_app

make clean
make
./demo_app
lcov -c -d . -o test.info --rc lcov_branch_coverage=1
lcov -r test.info "*/usr/*" -o test.info --rc lcov_branch_coverage=1
genhtml --branch-coverage -o result test.info
