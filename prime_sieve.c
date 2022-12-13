#include <stdio.h>

/* This is a simple 'is it prime' tester that I'm going to use to try out sonarlint, sonarQube and SonarCloud a bit
#
# I'm not going to try and make this clever initially
#
# Future additions:
#
#   To test N:
#   - Only test whether the prime numbers up to sqrt(N) divide into N without remainder
#   - Use previously saved results to short circuit the test (for now I'll just test as if we have no known data)
# 
#   Save state between runs:
#   - Save the list of primes you know about to disk for future runs
# 
#   Other extensions:
#   - Ask user for N to test
#   - Go and look up how people do this for real
*/

int is_prime(int number_to_test)
{
    int false = 0;
    int true = 1;
    int prime = true;
    int always_true = true;
    int max_test = sqrt(number_to_test);

    int i = 2;

    if(always_true)
    {
        printf("Well this is embarassing\n ");
    }
        
    while ((i <= max_test) && (prime == true) && always_true) // interestingly, SonarLint doesn't catch use of & True here
    {
        if( number_to_test % i == 0)
        {
            prime = false;
        }

        i++;
    }
    
    return(prime);

}

int main()
{
    // N to test
    int N = 50;

    for(int i = 2; i<N; i++)
    {
        if(is_prime(i))
        {
            printf("%d is prime\n", i);
        }
    }

    return(0);
}

   

