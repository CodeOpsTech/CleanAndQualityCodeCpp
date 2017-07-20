struct base {
	base() { 
      	base * bptr = this;
      	bptr->bar();
        	// even simpler ...
        	((base*)(this))->bar();
	}
    	virtual void bar() =0;
};
struct deri: base {
	void bar(){ }
};
int main() {
	deri d;
}

