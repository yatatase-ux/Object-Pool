#include <iostream>
#include "ObjectPool.hpp"
#include <conio.h>

class Enemy
{
public:
    void Attack() {
        std::cout << "Enemy Attack!!" << std::endl;
        std::cout << std::endl;

    }
};

class Player
{
public:
    void Attack()
    {
        std::cout << "Player Attack!!" << std::endl;
        std::cout << std::endl;
    }
};

int main()
{
    ObjectPool<Enemy> pool(2);

    auto e1 = pool.Acquire();
    e1->Attack();

    auto e2 = pool.Acquire();
    e2->Attack();

    //ObjectPool<Player> poolp(1);
    //auto p = poolp.Acquire();
    //p->Attack();
    //while (1)
    //{
    //    int key = _getch();

    //    if (key == 32)
    //    {
    //        p->Attack(); 
    //    }
    //}

    //PoolHandle<Enemy> handle = ;
    //{
    //    ObjectPool<Enemy> pool(10);
    //    handle = pool.Acquire();
    //}
}