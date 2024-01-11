#include <iostream>
#include <iomanip>

using namespace std;

const int MOD = 1000000007;

// Function to calculate the modular exponentiation (base^exp % MOD)
long long power(long long base, long long exp) {
    long long result = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % MOD;
        exp >>= 1;
        base = (base * base) % MOD;
    }
    return result;
}

// Function to calculate the modular inverse of a number (num^(-1) % MOD)
long long modInverse(long long num) {
    return power(num, MOD - 2);
}

// Function to calculate the probability
double calculateProbability(int runsRequired, int ballsRemaining, int wicketsDown, int currentRuns, int currentBalls) {
    if (currentRuns >= runsRequired && ballsRemaining >= 0 && wicketsDown <= 10)
        return 1.0;  // Virat has scored the required runs
    if (ballsRemaining == 0 || wicketsDown == 10)
        return 0.0;  // No balls left or all wickets down

    double probability = 0.0;
    for (int run = 1; run <= 6; ++run) {
        int newRuns = currentRuns + run;
        int newBalls = (currentBalls == 1) ? ballsRemaining - 1 : ballsRemaining;
        int newWickets = (run == 6) ? wicketsDown + 1 : wicketsDown;
        int newCurrentBalls = (currentBalls == 1) ? 6 : currentBalls - 1;

        probability += (1.0 / 6.0) * calculateProbability(runsRequired, newBalls, newWickets, newRuns, newCurrentBalls);
    }

    return probability;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, b, w, x;
        cin >> N >> b >> w >> x;

        double result = calculateProbability(N, b, w, x, 6);

        // Calculate p * q^-1 % (10^9 + 7)
        long long p = static_cast<long long>(result * 1e9) % MOD;
        long long qInverse = modInverse(1000000);  // q^-1

        long long finalResult = (p * qInverse) % MOD;

        cout << finalResult << endl;
    }

    return 0;
}