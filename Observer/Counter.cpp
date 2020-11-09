#include "Counter.hpp"

Counter::Counter(): Subject(),counter(0)
{
}

Counter::Counter(const Counter& Counter):Subject(Counter),counter(Counter.counter)
{
}

Counter& Counter::operator=(const Counter& Counter)
{
    if (this == &Counter)
    {
        Subject::operator=(Counter);
        return *this;
    }
    counter = Counter.counter;
    Subject::operator=(Counter);
    return *this;
    // TODO: insert return statement here
}

int Counter::GetCounter() const
{
    return counter;
}

void Counter::IncreaseCounter()
{
    counter++;
    Subject::Notify();
}

void Counter::DecreaseCounter()
{
    counter--;
    Subject::Notify();
}
