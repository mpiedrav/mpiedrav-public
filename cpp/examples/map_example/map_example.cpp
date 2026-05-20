#include <chrono>
#include <iostream>
#include <map>
#include <random>
#include <unordered_map>

int main() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> dist(-1.0, 1.0);

  std::map<double, double> map1;
  std::unordered_map<double, double> umap1;
  const int limit = 1e6;

  std::cout << "Running map with " << limit << " insertions\n";
  auto start_map = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < limit; ++i)
    map1[dist(gen)] = dist(gen);
  auto stop_map = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> duration_map = stop_map - start_map;
  std::cout << "Map took " << duration_map.count() << "ms\n";

  std::cout << "Running unordered map with " << limit << " insertions\n";
  auto start_umap = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < limit; ++i)
    umap1[dist(gen)] = dist(gen);
  auto stop_umap = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> duration_umap =
      stop_umap - start_umap;
  std::cout << "Unordered map took " << duration_umap.count() << "ms\n";
}
