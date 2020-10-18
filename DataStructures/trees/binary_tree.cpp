#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        left= nullptr;
        right = nullptr;
        data = d;
    }
};

node* buildtree(){
    int data;
    cin>>data;
    if(data == -1){
        return nullptr;
    }
    node* root = new node(data);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}

int height(node* root){
    if(root==nullptr){
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls, rs) + 1;
}

void PrintPre(node* root){
    if(root==nullptr){
        return ;
    }
    cout<<root->data<<" ";
    PrintPre(root->left);
    PrintPre(root->right);
}
void PrintIn(node* root){
    if(root==nullptr){
        return ;
    }
    PrintIn(root->left);
    cout<<root->data<<" ";
    PrintIn(root->right);
}
void PrintPost(node* root){
    if(root==nullptr){
        return ;
    }
    PrintPost(root->left);
    PrintPost(root->right);
    cout<<root->data<<" ";
}
void PrintLevel(node* root, int level){
    if(root==nullptr){
        return ;
    }
    if(level==1){
        cout<<root->data<<" ";
        return;
    }
    PrintLevel(root->left, level-1);
    PrintLevel(root->right, level-1);
}
void PrintLevelQueue(node* root){
    if(root==nullptr){
        return ;
    }
    queue<pair<node*, int>>Q;
    Q.push({root, 1});
    int level=1;
    while(!Q.empty()){
        node* current = Q.front().first;
        cout<<"Data: "<<current->data<<" "<<"Level:"<<Q.front().second;
        if(current->left!=nullptr){
            Q.push({current->left,level+1});
        }
        if(current->right!=nullptr){
            Q.push({current->right, level+1});
        }
        if(level<height(root)-1){
            level++;
        }
        cout<<endl;
        Q.pop();
    }
}
void PrintLevels(node* root){
    int height_ = height(root);
    for(int i= 0; i<height_; i++){
        PrintLevel(root, i);
        cout<<endl;
    }
}

int count(node* root){
    if(root==nullptr){
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}
int sum(node* root){
    if(root==nullptr){
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
}
int diameter(node* root){
    if(root==nullptr){
        return 0;
    }
    int hl = height(root->left);
    int hr = height(root->right);
    int both_trees = hl+hr;
    int left_subtree = diameter(root->left);
    int right_subtree = diameter(root->right);
    return max(both_trees, max(left_subtree, right_subtree));
}

pair<int, int> fastDiameter(node* root){
    pair<int, int> p;
    // pair stores height and diameter
    if(root==nullptr){
        p.first = p.second = 0;
        return p;
    }
    pair<int, int> LeftSubtree = fastDiameter(root->left);
    pair<int, int> RightSubtree = fastDiameter(root->right);
    p.first = max(LeftSubtree.first, RightSubtree.first) + 1;
    p.second = max(LeftSubtree.first+ RightSubtree.first, max(LeftSubtree.second, RightSubtree.second));
    return p;
}   
int ReplaceSum(node* root){
    if(root==nullptr){
        return 0;
    }
    if(root->left==nullptr && root->right==nullptr){
        return root->data;
    }
    int leftsum = ReplaceSum(root->left);
    int rightsum = ReplaceSum(root->right);
    int temp = root->data;
    root->data = leftsum + rightsum;
    return temp + root->data;
}
bool HeightBalancedTree(node* root){
    if(root==nullptr){
        return 1;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);
    if(abs(left_height-right_height)<=1 && HeightBalancedTree(root->left) && HeightBalancedTree(root->right)){
        return true;
    }
    return false;
}

node* HBTarray(int* a, int start, int end){
    if(start>end){
        return nullptr;
    }
        int mid = (start+ end)/2;
        node* root = new node(a[mid]);
        root->left = HBTarray(a, start, mid - 1);
        root->right = HBTarray(a, mid + 1 , end);
        return root;
}

int printRight(node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data;
    printRight(root->right);
    print(root->left);
}

node* lca(node* root, int a, int b){
    //Assuming that both a and b lie in the tree
    if(root==nullptr){
        return ;
    }
    if(root->data==a or root->data==b){
        return root;
    }
    //Search in left and right subtree
}
int main(){
    //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
    /*
    node* root=buildtree();
    cout<<"Pre Order"<<endl;
    PrintPre(root);
    cout<<endl<<"Post Order"<<endl;
    PrintPost(root);
    cout<<endl<<"In Order"<<endl;
    PrintIn(root);
    cout<<endl<<"Height of tree: ";
    cout<<height(root)<<endl;
    PrintLevelQueue(root);
    cout<<endl;
    cout<<"Sum: "<<sum(root)<<endl;
    cout<<"count: "<<count(root)<<endl;
    cout<<"Diameter: "<<diameter(root)<<endl;
    pair<int, int> fd = fastDiameter(root);
    cout<<"Fast Diameter: "<<fd.second<<endl;
    cout<<"Height Balanced: "<<HeightBalancedTree(root)<<endl;
    ReplaceSum(root);
    PrintLevelQueue(root);
    return 0;
    */
   int a[19] = {8 ,10 ,1 ,6 ,9, 7 , 3 ,14 ,13 };
   node* root = HBTarray(a, 0, 9);
}