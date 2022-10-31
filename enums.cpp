#include <iostream>
#include "mento.h"

enum HTTPStatus
{
    Created = 200,
    TemporaryRedirect = 301,
    NotFound = 404,
    NotAuthorized = 503
};

class Request
{
public:
    string url;
    string referer_url;
    int timeout;
    float completed_in;

    Request()
    {
        print("Request default constructor initialized.");
    }

    Request(string _url, string _referer_url, float _completed_in, int _timeout = 50)
    {
        url = _url;
        referer_url = _referer_url;
        completed_in = _completed_in;
        timeout = _timeout;
    };
};

class HTTPResponse
{
public:
    HTTPStatus status;
    Request request = Request("https://google.com/search"s, "https://google.com/search?hl=tr"s, 33.1f);
};

int main()
{

    HTTPResponse response;
    response.status = HTTPStatus::Created;

    if (response.status == HTTPStatus::Created)
    {
        print("Status: OK"s);
    }

    print("Request completed in: "s + to_string(response.request.completed_in) + " seconds"s);
}