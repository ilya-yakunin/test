#include <fstream>

int main()
{
    std::ifstream f1 ("input.txt");
    std::ofstream f2 ("output.txt");

    short t;
    f1>>t;
    long long n,k,sum,j,p=0;
    for(short i=0;i<t;i++)
    {
        f1>>n;
        sum=1;
        j=1;
        k=1;
        p=0;
        while(sum<=n){
            sum+=(p+j);
            p+=j;

            j++;
            k++;

        }
        f2<<k-1<<'\n';


    }
}
