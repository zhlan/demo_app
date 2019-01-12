# demo_app

make clean      #该命令执行Makefile的清理操作，删除make命令产生的中间文件

make                #该命令执行make操作，根据Makefile的定义，执行编译

./demo_app     #执行生成的可执行程序

lcov -c -d . -o test.info --rc lcov_branch_coverage=1                         #统计执行gcno，gcda文件，生成覆盖率文件test.info

lcov -r test.info "*/usr/*" -o test.info --rc lcov_branch_coverage=1   #将test.info中，包含的库文件删掉

genhtml --branch-coverage -o result test.info                                     #根据test.info，生成对应的覆盖率报告

备注：lcov在1.10版本后默认关闭分支覆盖率，想要打开，需要加上--rc lcov_branch_coverage=1和--branch-coverage，统计分支覆盖率，对于一些判断语句比较复杂的语句，时间可能会比较慢。
