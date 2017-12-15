#include <iostream>

using namespace std;



int process_arguments(int argc, char* argv[])
{

    for(int i=1;i<argc;i++)
    {
        string arg(argv[i]);
        if(arg.compare("--some-option")==0)
        {
            cout << "some-option specified" << endl;
        } 
        else if(arg.compare("-o")==0)
        {
            cout << "o option specified" << endl;
        }
    }

    return 0;
}

void print_usage()
{
    cout << "wrong usage" << endl;
    cout << "hello \"name\"" << endl;
}

int main(int argc, char* argv[])
{
    int error = 0;

    error = process_arguments(argc, argv);
    if(error)
    {
        print_usage();
        goto exit;
    }

    cout << "hello" << endl;

exit:
    return error;
}
