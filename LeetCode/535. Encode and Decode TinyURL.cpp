// LeetCode 535. Encode and Decode TinyURL
// Indexing.
class Solution{
public:
    int index = 0;
    map<int, string> mapping;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl){
        mapping[index] = longUrl;
        return "http://tinyurl.com/" + to_string(index++);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl){
        string index;
        for(int i = 0; i < shortUrl.size(); i++)
            if(isdigit(shortUrl[i])) index += shortUrl[i];
        return mapping[stoi(index)];
    }
};
