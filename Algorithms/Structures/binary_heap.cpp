template <
    class T,
    class COMP = std::greater<T>>
class Heap {
private:
    std::vector<T> container;
    COMP comp;
    void sift_down(int index) {
        int c1 = index * 2 + 1;
        int c2 = index * 2 + 2;

        if (c1 >= container.size())
            return;

        T next_value = container[c1];
        int next_index = c1;
        if (c2 < container.size() && !comp(container[c2], next_value)) {
            next_value = container[c2];
            next_index = c2;
        }

        if (!comp(next_value, container[index])) {
            swap(container[index], container[next_index]);
            sift_down(next_index);
        }
    }

    void sift_up(int index)
    {
        int parent = (index - 1) / 2;

        if (index == parent)
            return;

        if (!comp(container[index], container[parent])) {
            swap(container[index], container[parent]);
            sift_up(parent);
        }
    }

public:
    void insert(T value) {
        container.push_back(value);
        sift_up(container.size() - 1);
    }

    T top() const {
        if (!container.empty())
            return container[0];
        else
            return T();
    }

    void pop() {
        container[0] = container[container.size() - 1];
        container.pop_back();
        sift_down(0);
    }

    bool empty() const {
        return container.empty();
    }

    explicit Heap(std::vector<T> items = {}) : container(std::move(items)) {
        comp = COMP();
        for (int i = container.size() - 1; i >= 0; i--)
            sift_down(i);
    }
};
