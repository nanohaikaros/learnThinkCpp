//: C03:Scope.cpp
// How variables are scoped
int main() {
    int scp1;
    // scp1 visible here
    {
        // scp1 still visible here
        //...
        int scp2;
        // scp2 visible here
        // ...
        {
            // scp1 & scp2 still visible here
            // ...
            int scp3;
            // scp1, scp2 & scp3 visible here
            // ...
        }   // <--scp3 destroyed here
        // scp3 not available her
        // scp1 & scp2 still visible here
        // ...
    }   // <-- scp2 destroyed here
    // scp3 & scp2 not available here
    // scp1 still visible here
    // ..
}   // <-- scp1 destroyed here
