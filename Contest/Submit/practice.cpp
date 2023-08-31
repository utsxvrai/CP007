#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;
    
    std::map<int, int> home_colors;
    std::map<int, int> guest_colors;
    
    for (int i = 0; i < n; ++i) {
        int h, a;
        std::cin >> h >> a;
        home_colors[h]++;
        guest_colors[a]++;
    }
    
    int total_guest_uniforms = 0;
    
    for (const auto& entry : home_colors) {
        int h = entry.first;
        int a_count = entry.second;
        total_guest_uniforms += guest_colors[h] * a_count;
    }
    
    std::cout << total_guest_uniforms << std::endl;
    
    return 0;
}
