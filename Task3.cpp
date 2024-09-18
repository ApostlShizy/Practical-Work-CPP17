#include<iostream>
#include<cstring>

bool subStr(const char * a, const char * b)
{    
    for(int i = 0; i <= strlen(a) - strlen(b);++i)
    {   
        bool found = true;
        for(int j = i; j <= strlen(b);++j)
        {
            if(*(a + i) != *(b + i))
            {
                found = false;
            }
        }
        if(found)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    const char * a = "Hello world!";
    const char * b = "wor";
    const char * c = "banana";
    std::cout << std::boolalpha << subStr(a,b) <<" "<<subStr(a,c);
}