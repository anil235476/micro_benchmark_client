#include "benchmark/benchmark.h"
#include <vector>
using namespace std;

static void BM_vector_pushback(benchmark::State& state) {
	for (auto _ : state) {
		vector<int> v;
		v.push_back(1);
	}
	
}
BENCHMARK(BM_vector_pushback);

BENCHMARK_MAIN()