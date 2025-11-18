//Vectors in STL

// ┌────────────────────┬──────────────────────────┬───────────────────┐
// │     Operation      │        Function          │ Time Complexity   │
// ├────────────────────┼──────────────────────────┼───────────────────┤
// │ Access (by index)  │ operator[]               │ O(1)              │
// │ Insert (end)       │ push_back()              │ O(1) amortized    │
// │ Insert (middle)    │ insert()                 │ O(n)              │
// │ Erase (end)        │ pop_back()               │ O(1)              │
// │ Erase (middle)     │ erase()                  │ O(n)              │
// │ Find (manual loop) │ —                        │ O(n)              │
// │ Size               │ size()                   │ O(1)              │
// │ Sort               │ sort() (algorithm header)│ O(n log n)        │
// └────────────────────┴──────────────────────────┴───────────────────┘

// Amortised O(1) = “O(1) on average, even if occasional operations take longer.”

//Sets in STL

// ┌────────────────────┬──────────────────────────┬───────────────────┐
// │     Operation      │        Function          │ Time Complexity   │
// ├────────────────────┼──────────────────────────┼───────────────────┤
// │ Insert             │ insert()                 │ O(log n)          │
// │ Erase              │ erase()                  │ O(log n)          │
// │ Find               │ find()                   │ O(log n)          │
// │ Count              │ count()                  │ O(log n)          │
// │ Lower Bound        │ lower_bound()            │ O(log n)          │
// │ Upper Bound        │ upper_bound()            │ O(log n)          │
// │ Size / Empty       │ size(), empty()          │ O(1)              │
// └────────────────────┴──────────────────────────┴───────────────────┘

//Maps in STL

// ┌────────────────────┬──────────────────────────┬───────────────────┐
// │     Operation      │        Function          │ Time Complexity   │
// ├────────────────────┼──────────────────────────┼───────────────────┤
// │ Insert / Assign    │ insert(), operator[]     │ O(log n)          │
// │ Erase              │ erase()                  │ O(log n)          │
// │ Find               │ find()                   │ O(log n)          │
// │ Access Element     │ operator[]               │ O(log n)          │
// │ Count (by key)     │ count()                  │ O(log n)          │
// │ Lower Bound        │ lower_bound()            │ O(log n)          │
// │ Upper Bound        │ upper_bound()            │ O(log n)          │
// │ Size / Empty       │ size(), empty()          │ O(1)              │
// └────────────────────┴──────────────────────────┴───────────────────┘

//Stacks in STL

// ┌────────────────────┬──────────────────────────┬───────────────────┐
// │     Operation      │        Function          │ Time Complexity   │
// ├────────────────────┼──────────────────────────┼───────────────────┤
// │ Push (top)         │ push()                   │ O(1)              │
// │ Pop (top)          │ pop()                    │ O(1)              │
// │ Access Top         │ top()                    │ O(1)              │
// │ Size / Empty       │ size(), empty()          │ O(1)              │
// └────────────────────┴──────────────────────────┴───────────────────┘

//Queues in STL

// ┌────────────────────┬──────────────────────────┬───────────────────┐
// │     Operation      │        Function          │ Time Complexity   │
// ├────────────────────┼──────────────────────────┼───────────────────┤
// │ Enqueue (back)     │ push() / emplace()       │ O(1)              │
// │ Dequeue (front)    │ pop()                    │ O(1)              │
// │ Access Front       │ front()                  │ O(1)              │
// │ Access Back        │ back()                   │ O(1)              │
// │ Size / Empty       │ size(), empty()          │ O(1)              │
// └────────────────────┴──────────────────────────┴───────────────────┘

//Deques in STL

// ┌────────────────────┬──────────────────────────┬───────────────────┐
// │     Operation      │        Function          │ Time Complexity   │
// ├────────────────────┼──────────────────────────┼───────────────────┤
// │ Insert Front       │ push_front()             │ O(1)              │
// │ Insert Back        │ push_back()              │ O(1)              │
// │ Erase Front        │ pop_front()              │ O(1)              │
// │ Erase Back         │ pop_back()               │ O(1)              │
// │ Random Access      │ operator[] / at()        │ O(1)              │
// │ Insert Middle      │ insert()                 │ O(n)              │
// │ Erase Middle       │ erase()                  │ O(n)              │
// │ Size / Empty       │ size(), empty()          │ O(1)              │
// └────────────────────┴──────────────────────────┴───────────────────┘


//All comparision

// +------------+-------------+--------------------+-------------------+------------------------------+
// |  Container |   Ordered?  | Allows Duplicates? |   Random Access   |         Typical Use          |
// +------------+-------------+--------------------+-------------------+------------------------------+
// | set        | Yes         | No                 | No                | Unique sorted elements       |
// | map        | Yes         | No (unique keys)   | No                | Key–value pairs              |
// | vector     | No          | Yes                | O(1)              | Dynamic array                |
// | stack      | No          | Yes                | No                | LIFO operations              |
// | queue      | No          | Yes                | No                | FIFO operations              |
// | deque      | No          | Yes                | O(1) ends only    | Double-ended queue           |
// +------------+-------------+--------------------+-------------------+------------------------------+


//Unordered_Set in STL

// +------------------+-----------------------+-------------------+
// |     Operation    |       Function        | Time Complexity   |
// +------------------+-----------------------+-------------------+
// | Insert           | insert()              | Average O(1)      |
// | Erase            | erase()               | Average O(1)      |
// | Find             | find()                | Average O(1)      |
// | Count            | count()               | Average O(1)      |
// | Size / Empty     | size(), empty()       | O(1)              |
// | Rehash / Reserve | rehash(), reserve()   | O(n)              |
// +------------------+-----------------------+-------------------+
// Note: Unordered set is not sorted; implemented using hash tables.

//Unordered_Map in STL

// +------------------+-----------------------+-------------------+
// |     Operation    |       Function        | Time Complexity   |
// +------------------+-----------------------+-------------------+
// | Insert / Assign  | insert(), operator[]  | Average O(1)      |
// | Erase            | erase()               | Average O(1)      |
// | Find             | find()                | Average O(1)      |
// | Access Element   | operator[]            | Average O(1)      |
// | Count (by key)   | count()               | Average O(1)      |
// | Size / Empty     | size(), empty()       | O(1)              |
// | Rehash / Reserve | rehash(), reserve()   | O(n)              |
// +------------------+-----------------------+-------------------+
// Note: Unordered map is not sorted; implemented using hash tables.

// +-----------------+------------------+------------------+-----------------------------+
// | Container Type  | Ordered?         | Allows Duplicates? | Typical Implementation     |
// +-----------------+------------------+------------------+-----------------------------+
// | set             | Yes              | No               | Red-Black Tree (balanced)   |
// | unordered_set   | No               | No               | Hash Table                 |
// | map             | Yes              | No (unique keys) | Red-Black Tree (balanced)   |
// | unordered_map   | No               | No (unique keys) | Hash Table                 |
// +-----------------+------------------+------------------+-----------------------------+