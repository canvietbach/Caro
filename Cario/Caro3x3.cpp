#include <bits/stdc++.h>
#define ll long long
using namespace std;
char a[6][6];
ll d1, d2;
ll don, nga;
ll random(ll l, ll r)
{
    return rand() % (r - l) + l;
}
ll kiemtra()
{
    vector<ll> ngang1, ngang2, ngang3, doc1, doc2, doc3, cheo1, cheo2;
    for(ll i = 1; i <= 3; i++)
    {
        if(a[1][i] == 'X') ngang1.push_back(i);
        if(a[2][i] == 'X') ngang2.push_back(i);
        if(a[3][i] == 'X') ngang3.push_back(i);
        if(a[i][1] == 'X') doc1.push_back(i);
        if(a[i][2] == 'X') doc2.push_back(i);
        if(a[i][3] == 'X') doc3.push_back(i);
        if(a[i][i] == 'X') cheo1.push_back(i);
    }
    if(a[1][3] == 'X') cheo2.push_back(3);
    if(a[2][2] == 'X') cheo2.push_back(2);
    if(a[3][1] == 'X') cheo2.push_back(1);
    if(ngang1.size() == 3) return 1;
    if(ngang2.size() == 3) return 1;
    if(ngang3.size() == 3) return 1;
    if(doc1.size() == 3) return 1;
    if(doc2.size() == 3) return 1;
    if(doc3.size() == 3) return 1;
    if(cheo1.size() == 3) return 1;
    if(cheo2.size() == 3) return 1;
    return 0;
}
void phong_thu()
{
    vector<ll> ngang1, ngang2, ngang3, doc1, doc2, doc3, cheo1, cheo2;
    for(ll i = 1; i <= 3; i++)
    {
        if(a[1][i] == 'X') ngang1.push_back(i);
        if(a[2][i] == 'X') ngang2.push_back(i);
        if(a[3][i] == 'X') ngang3.push_back(i);
        if(a[i][1] == 'X') doc1.push_back(i);
        if(a[i][2] == 'X') doc2.push_back(i);
        if(a[i][3] == 'X') doc3.push_back(i);
        if(a[i][i] == 'X') cheo1.push_back(i);
    }
    if(a[1][3] == 'X') cheo2.push_back(3);
    if(a[2][2] == 'X') cheo2.push_back(2);
    if(a[3][1] == 'X') cheo2.push_back(1);
    // xu li
    ll c[3];
    if(ngang1.size() == 2) 
    {
        nga = 1;
        for(ll i = 0; i < 3; i++)
        {
            if(ngang1[i] == 1) c[1]++;
            else if(ngang1[i] == 2) c[2]++;
            else c[3]++;
        }
        if(c[1] == 0) don = 1;
        else if(c[2] == 0) don = 2;
        else don = 3;
        return ;
    }
    else if(ngang2.size() == 2) 
    {
        nga = 2;
        for(ll i = 0; i < 3; i++)
        {
            if(ngang2[i] == 1) c[1]++;
            else if(ngang2[i] == 2) c[2]++;
            else c[3]++;
        }
        if(c[1] == 0) don = 1;
        else if(c[2] == 0) don = 2;
        else don = 3;
        return ;
    }
    else if(ngang3.size() == 2) 
    {
        nga = 3;
        for(ll i = 0; i < 3; i++)
        {
            if(ngang3[i] == 1) c[1]++;
            else if(ngang3[i] == 2) c[2]++;
            else c[3]++;
        }
        if(c[1] == 0) don = 1;
        else if(c[2] == 0) don = 2;
        else don = 3;
        return ;
    }
    else if(doc1.size() == 2) 
    {
        don = 1;
        for(ll i = 0; i < 3; i++)
        {
            if(doc1[i] == 1) c[1]++;
            else if(doc1[i] == 2) c[2]++;
            else c[3]++;
        }
        if(c[1] == 0) nga = 1;
        else if(c[2] == 0) nga = 2;
        else nga = 3;
        return ;
    }
    else if(doc2.size() == 2) 
    {
        don = 2;
        for(ll i = 0; i < 3; i++)
        {
            if(doc2[i] == 1) c[1]++;
            else if(doc2[i] == 2) c[2]++;
            else c[3]++;
        }
        if(c[1] == 0) nga = 1;
        else if(c[2] == 0) nga = 2;
        else nga = 3;
        return ;
    }
    else if(doc3.size() == 2) 
    {
        don = 3;
        for(ll i = 0; i < 3; i++)
        {
            if(doc3[i] == 1) c[1]++;
            else if(doc3[i] == 2) c[2]++;
            else c[3]++;
        }
        if(c[1] == 0) nga = 1;
        else if(c[2] == 0) nga = 2;
        else nga = 3;
        return ;
    }
    else if(cheo1.size() == 2) 
    {
        for(ll i = 0; i < 3; i++)
        {
            if(cheo1[i] == 1) c[1]++;
            else if(cheo1[i] == 2) c[2]++;
            else c[3]++;
        }
        if(c[1] == 0)
        {
            don = 1;
            nga = 1;
        } 
        else if(c[2] == 0)
        {
            don = 2;
            nga = 2;
        } 
        else
        {
            don = 3;
            nga = 3;
        } 
        return ;
    }
    else if(cheo2.size() == 2) 
    {
        for(ll i = 0; i < 3; i++)
        {
            if(cheo2[i] == 1) c[1]++;
            else if(cheo2[i] == 2) c[2]++;
            else c[3]++;
        }
        if(c[1] == 0)
        {
            don = 1;
            nga = 3;
        } 
        else if(c[2] == 0)
        {
            don = 2;
            nga = 2;
        } 
        else
        {
            don = 3;
            nga = 1;
        } 
        return ;
    }
    else
    {
        don = random(1, 2);
        nga = random(2, 3);
        while(a[don][nga] != '|')
        {
            don = random(1, 2);
            nga = random(2, 3);
        }
    }
}
void Memset()
{
    for(ll i = 1; i <= 3; i++)
    {
        for(ll j = 1; j <= 3; j++) a[i][j] = '|';
    }
}
void Print()
{
    cout << "   1   2   3" << '\n';
    cout << "1  "<< a[1][1] << "   " << a[1][2] << "   " << a[1][3] << '\n';
    cout << "2  "<< a[2][1] << "   " << a[2][2] << "   " << a[2][3] << '\n';
    cout << "3  "<< a[3][1] << "   " << a[3][2] << "   " << a[3][3];
}
void Neu_k_bang_1()
{
        Memset();
        char nhap;
        cout << "Chọn X (đi trước) hay O (đi trước): "; 
        cin >> nhap;
        while(nhap != 'X' && nhap != 'O') 
        {
            cout << "Nhập lại ( Chỉ được nhập X hoặc O ): ";
            cin >> nhap;
        }
        ll luot = 9;
        while (luot--)
        {
            Print();
            ll i, j;
            cout << '\n';
            cout << "Người chơi "<< nhap <<" chọn ô: ";
            cin >> i >> j;
            while(true)
            {
                cout << "\033[2J\033[1;1H";
                if(i > 3 || i < 1 || j < 1 || j > 3)
                {
                    cout << "Ô KHÔNG HỢP LỆ\n";
                    cout << "Nhập lại: ";
                    cin >> i >> j;
                }
                else if(a[i][j] != '|')
                {
                    cout << "Ô ĐÃ NHẬP RỒI\n";
                    cout << "Nhập lại: ";
                    cin >> i >> j;
                }
                else break;
            }
            a[i][j] = nhap;
            if(kiemtra() == 1)
            {
                cout << "->NGƯỜI CHƠI " << nhap << " THẮNG\n";
                Print();
                break;
            } 
            if(nhap == 'X') nhap = 'O';
            else nhap = 'X';
        }
        if(luot == 0)
        {
            Print();
            cout << "\nHOA";
        } 
}
void Neu_k_bang_2()
{
    Memset();
    bool ok = false;
    char nhap;
    cout << "Chọn Computer - Nhập X (đi trước) hay Player (đi trước) - Nhập O: "; 
    cin >> nhap;
    while(nhap != 'X' && nhap != 'O') 
    {
        cout << "Nhập lại ( Chỉ được nhập X hoặc O ): ";
        cin >> nhap;
    }
    if(nhap == 'O') ok = true;
    bool chec = false;
    ll luot = 9;
    if(nhap == 'O') chec = true;
        while (luot != 0)
        {
            Print();
            cout << '\n';
            ll i = 0, j = 0;
            if(nhap == 'O')
            {
                cout << '\n';
                cout << "Người chơi "<< nhap <<" chọn ô: ";
                cin >> i >> j;
                while(true)
                {
                    if(i > 3 || i < 1 || j < 1 || j > 3)
                    {
                        cout << "Ô KHÔNG HỢP LỆ\n";
                        cout << "Nhập lại: ";
                        cin >> i >> j;
                    }
                    else if(a[i][j] != '|')
                    {
                        cout << "Ô ĐÃ NHẬP RỒI\n";
                        cout << "Nhập lại: ";
                        cin >> i >> j;
                    }
                    else break;
                }
            }
            else if(chec == true)
            {
                phong_thu();
                i = don;
                j = nga;
            }
            else if(ok == false)
            {
                if(luot % 2 != 0)
                {
                    if(luot == 9)
                    {
                        ll ngau = random(1, 4);
                        if(ngau == 1) 
                        {
                            i = 1;
                            j = 1;
                        }
                        else if(ngau == 2)
                        {
                            i = 1;
                            j = 3;
                        }
                        else if(ngau == 3)
                        {
                            i = 3;
                            j = 1;
                        }
                        else 
                        {
                            i = 3;
                            j = 3;
                        }
                        d1 = i;
                        d2 = j;
                    }
                    if(a[2][2] != 'O' && luot == 7)
                    {
                        bool ch = false;
                        if(d1 == 1)
                        {
                            for(ll h = 1; h <= 3; h++)
                            {
                                if(a[1][h] == 'O')
                                {
                                    if(d2 == 3)
                                    {
                                        i = 3;
                                        j = 3; 
                                        d1 = 3;
                                        d2 = 1;
                                    }
                                    else
                                    {
                                        i = 3;
                                        j = 1;
                                        d1 = 3;
                                        d2 = 3;
                                    }
                                    ch = true;
                                    break;
                                }
                            }
                            if(ch == false)
                            {
                                if(a[1][3] == 'X')
                                {
                                    i = 3;
                                    j = 3;
                                    d1 = 3;
                                    d2 = 1;
                                }
                                else 
                                {
                                    i = 3;
                                    j = 1;
                                    d1 = 3;
                                    d2 = 3;
                                }
                            }
                        }
                        else if(d1 == 3)
                        {
                            for(ll h = 1; h <= 3; h++)
                            {
                                if(a[3][h] == 'O')
                                {
                                    if(d2 == 1)
                                    {
                                        i = 1;
                                        j = 1;
                                        d1 = 1;
                                        d2 = 3;
                                    }
                                    else
                                    {
                                        i = 1;
                                        j = 3;
                                        d1 = 1;
                                        d2 = 1;
                                    }
                                    ch = true;
                                    break;
                                }
                            }
                            if(ch == false)
                            {
                                if(a[3][1] == 'X')
                                {
                                    i = 1;
                                    j = 1;
                                    d1 = 1;
                                    d2 = 3;
                                }
                                else 
                                {
                                    i = 1;
                                    j = 3;
                                    d1 = 1;
                                    d2 = 1;
                                }
                            }
                        }
                        
                    }
                    else if(luot = 5)
                    {
                        i = d1;
                        j = d2;
                    }
                }
                
                
            }
            a[i][j] = nhap;
            if(kiemtra() == 1)
            {
                cout << "->NGƯỜI CHƠI " << nhap << " THẮNG";
                break;
            } 
            if(nhap == 'X') nhap = 'O';
            else nhap = 'X';
            luot--;
        }
    if(luot == 0) cout << "HOA";
}
void Neu_k_bang_3()
{
    Memset();
        char nhap;
        cout << "Chọn X (đi trước) hay O (đi trước): "; 
        cin >> nhap;
        while(nhap != 'X' && nhap != 'O') 
        {
            cout << "Nhập lại ( Chỉ được nhập X hoặc O ): ";
            cin >> nhap;
        }
        ll luot = 9;
        while (luot != 0)
        {
            Print();
            ll i, j;
            cout << '\n';
            ll yu = random(1, 2);
            ll yo = random(2, 3);
            i = random(yu, yo);
            j = random(yu, yo);
            bool ch = false;
            while(a[i][j] != '|')
            {
                for(ll p = 1; p <= 3; p++)
                {
                    for(ll q = 1; q <= 3; q++)
                    {
                        if(a[p][q] == '|')
                        {
                            i = p;
                            j = q;
                            break;
                        }
                    }
                }
                ch = true;
            }
            a[i][j] = nhap;
            if(kiemtra() == 1)
            {
                cout << "->NGƯỜI CHƠI " << nhap << " THẮNG";
                Print();
                break;
            } 
            if(nhap == 'X') nhap = 'O';
            else nhap = 'X';
            luot--;
        }
        if(luot == 0)
        {
            Print();
            cout << "\n HOÀ";
        }   
}
void solve(ll k)
{
    if(k == 1)
    {
        Neu_k_bang_1();
    }
    else if(k == 2)
    {
        Neu_k_bang_2();
    }
    else
    {
        Neu_k_bang_3();
    }
}
ll n;
int main()
{
    srand(time(NULL));
    cout << "2 Player (Bấm 1)" << '\n';
    cout << "Player vs Computer (Bấm 2)" << '\n';
    cout << "Computer vs Computer (Bấm 3)" << '\n';
    cout << "Chọn chế độ: ";
    cin >> n;
    while(n < 1 || n > 3)
    {
        cout << "Nhập lại: ";
        cin >> n;
    }
    solve(n);
}