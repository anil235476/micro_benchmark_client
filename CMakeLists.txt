cmake_minimum_required(VERSION 3.1)

project(benchmark_example)



message( STATUS
"benchmark include dirctory: $ENV{BENCHMARK_DIR}"
)

include_directories(
	$ENV{BENCHMARK_DIR}
)

message( STATUS
"benchmark lib dirctory: $ENV{BENCHMARK_LIB_DIR}"
)


link_directories(
	$ENV{BENCHMARK_LIB_DIR}
)


	
add_executable( benchmark_app
	main.cxx
)



target_link_libraries(benchmark_app
	benchmark
	Shlwapi
)

