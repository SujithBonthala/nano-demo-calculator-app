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
    res["result"] = req.body["first"] + req.body["second"];
    return crow::response(move(res));
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    crow::json::wvalue res;
    res["result"] = req.body["first"] - req.body["second"];
    return crow::response(move(res));
}