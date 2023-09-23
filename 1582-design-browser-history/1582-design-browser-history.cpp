class BrowserHistory {
     class DLL {
    public:
        string val; //url
        DLL* next;
        DLL* prev;
        DLL(string val) {
            this->val = val;
            next = prev = nullptr;
        }
    };
    DLL *curr;
public:
    BrowserHistory(string homepage) {
        curr = new DLL(homepage);
    }
    
    void visit(string url) {
        DLL* node = new DLL(url);
        curr->next = node;
        node->prev = curr;
        curr = node;  
    }
    
    string back(int steps) {
          while(steps > 0) {
            if(curr->prev == nullptr) break;
            
            curr = curr->prev;
            steps--;
        }
        return curr->val;
    }
    
    string forward(int steps) {
         while(steps > 0) {
            if(curr->next == nullptr) break;
            
            curr = curr->next;
            steps--;
        }
        return curr->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */