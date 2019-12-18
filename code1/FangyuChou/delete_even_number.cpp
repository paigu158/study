#include <iostream>
#include <vector>
#include <ctime>


using namespace std;

vector<int> randomVector()//生成随机数组
{

    vector<int> ivInputVec;

    srand((unsigned)time( NULL ) );

    int num_input_vec = rand()%20;
    for(size_t i=0; i<num_input_vec; i++)
    {
        ivInputVec.push_back(rand()%100);
    }

    return ivInputVec;
}


vector<int> deleteEvenNum(vector<int> ivVec)//删除偶数
{
    vector<int> ivOddVec;

    for (size_t i=0; i<ivVec.size(); i++)
    {
        if (ivVec[i] % 2 != 0)
        {
            ivOddVec.push_back(ivVec[i]);
        }
    }

    return ivOddVec;
}

int main (int argc, char** argv)
{
    vector<int> ivTest = randomVector();
    //vector<int> ivTest; //空数组输入测试

    if (ivTest.empty())
    {
        cout << "The input vector is empty!" << endl;
    }
    else
    {
        cout << "vector before deleting even number:" << endl;
        for (size_t i=0; i<ivTest.size(); i++)
        {
            cout << ivTest[i] << endl;
        }

        vector<int> ivTest_after_delete = deleteEvenNum(ivTest);

        if (ivTest_after_delete.empty())
        {
            cout << "The output vector is empty!" << endl;
        }
        else
        {
            cout << "vector after deleting even number:" << endl;
            for (size_t i=0; i<ivTest_after_delete.size(); i++)
            {
                cout << ivTest_after_delete[i] << endl;
            }
        }
    }

    return 0;
}
