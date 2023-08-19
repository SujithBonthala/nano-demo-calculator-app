#include "crow_all.h"
#include <bits/stdc++.h>
using namespace std;

crow::response greet()
{
    return crow::response{"Hello World!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    crow::json::wvalue res;
    res["result"] = input["first"].i() + input["second"].i();
    return res;
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    crow::json::wvalue res;
    res["result"] = input["first"].i() - input["second"].i();
    return res;
}