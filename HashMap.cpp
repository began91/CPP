#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
using namespace std;

const int T_S = 10; //table size

class HashTableEntry {
public:
    int k, v;
    HashTableEntry(int k, int v): k(k), v(v) {}
};

class HashMapTable {
private: 
    HashTableEntry **t; //double pointer to table
public: 
    HashMapTable() {
        t = new HashTableEntry * [T_S]; //table of entries * table size
        for (int i = 0; i < T_S; i++) {
            t[i] = NULL; //initialize each entry as null;
        }
    }
    
    void DisplayTable() {
        for (int i = 0; i < T_S; i++) {
            if (t[i]) {
                cout << (i+1) << ". " << t[i]->k << " " << t[i]->v << " | " << flush;
            } else {
                cout << (i+1) << ". NULL | " << flush;
            }
        }
        cout << endl;
    }

    int HashFunc(int k) {
        k--;
        return k % T_S;
    }

    void IterativeInsert(int k, int v) {
        int h = HashFunc(k); // hash the key
        while (t[h] != NULL && t[h]->k != k) { //iterative not recursive
            //if the table entry is taken and its not the right key
            h = HashFunc( h + 1 ); //linear hash to the next entry
            //continue until finding an NULL entry or the correct entry for the key
        }
        if (t[h] != NULL) { //if the entry is already occupied
            delete t[h];
        }
        t[h] = new HashTableEntry(k, v);
        DisplayTable();
    }

    void Insert(int h, int k, int v) {
        //con: do have to call the full Insert function multiple times
        //con: do have to handle table size
        if (t[h] != NULL && t[h]->k != k) {
            //table entry full and not the correct key
            h++; // linear hashing to next spot
            h %= T_S; //handle table size
            Insert(h, k, v); //recurse!
        } else {
            if (t[h] != NULL) {
                delete t[h];
            }
            t[h] = new HashTableEntry(k, v);
            DisplayTable();
        }
    }

    void RecursiveInsert(int k, int v) {
        //pro: dont have to call the hash function multiple times (if we had a complex hash)
        int h = HashFunc(k);
        Insert (h, k, v);
    }


    ~HashMapTable() {
        for (int i = 0; i < T_S; i++) {
            if (t[i] != NULL) 
                delete t[i];
                delete[] t;
        }
    }
};

int main() {
    HashMapTable hash;
    int k, v;
    hash.DisplayTable();
    k = 10;
    v = 69;
    hash.IterativeInsert(k, v);
    k = 30;
    v = 70;
    hash.RecursiveInsert(k, v);
    v = 300;
    hash.RecursiveInsert(k, v);
    return 0;
}