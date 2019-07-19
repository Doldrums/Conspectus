/*
    Disjoint Set Union (DSU) - Система непересекающихся множеств
    Лучшее описание: http://e-maxx.ru/algo/dsu

    Решаемые задачи:
    1) Поддержка компонент связности (проверка принадлежности вершин к компонентам, объединение компонент)
    2) Хранение информации, характерной для множества
    3) (следствие из 3) "Прыжки" по отрезу. Пример: задача о плокразке подотрезков (оффлайн)
    4) Нахождение Minimal Spaning Tree алгоритмом Краскала

    Приведена реализация с примененеием эвристики сжатия пути и ранговой эвристики на основе размеров деревьем
 */

class DSU {
private:
    vector<int> parent; 
    vector<int> size;
public:

    void make_set(int x) {
        parent[x] = x;
        size[x] = 1;
    }

    int find_set(int x) {
        if (parent[x] == -1)
            return -1;
        
        if (x == parent[x])
            return x;
        return parent[x] = find_set(parent[x]);
    }

    void union_sets(int x, int y) {
        x = find_set(x);
        y = find_set(y);
        if (y != x) {
            if (size[x] < size[y])
                swap(x, y);
            parent[y] = x;
            size[x] += size[y];
        }
    }

    // max_element - значение максмального элемента, который будет использован
    DSU(int max_element) {
        parent = vector<int>(max_element + 1, -1);
        size = vector<int>(max_element + 1, -1);
    }
};