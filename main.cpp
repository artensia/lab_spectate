#include <QCoreApplication>
#include <QFileInfo>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    QFileInfo f_info("H:\\Desktop\\folder\\a.txt");
    cout<<f_info.exists()<<endl;
    cout<<f_info.size()<<endl;

    bool fileExist = f_info.exists();
    int fileCurrentSize = f_info.size();

    while(1){
        f_info.refresh();
        if(fileExist !=f_info.exists()||fileCurrentSize !=f_info.size()){
            cout<<f_info.exists()<<endl;
            cout<<f_info.size()<<endl;
            fileExist = f_info.exists();
            fileCurrentSize = f_info.size();
        }
    }


    return 0;
}
