static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class FoodRatings {
public:
    unordered_map<string,string> foodtoCusine;
    unordered_map<string,int> foodRating;
    unordered_map<string,set<pair<int,string>>>cusineFood;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
            for(int i=0;i<foods.size();i++)
            {
                foodtoCusine[foods[i]]=cuisines[i];
                foodRating[foods[i]]=ratings[i];
                cusineFood[cuisines[i]].insert({-ratings[i],foods[i]});
            }

        }
    
    void changeRating(string food, int newRating) {
        string cui=foodtoCusine[food];
        int rat=foodRating[food];

        cusineFood[cui].erase({-rat,food});

        foodRating[food]=newRating;
        cusineFood[cui].insert({-newRating,food});
    }
    
    string highestRated(string cuisine) {
        return (*cusineFood[cuisine].begin()).second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */