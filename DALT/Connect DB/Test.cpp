#include <stdio.h>  // for printf
#include <sql.h> // main SQLAPI++ header

int main(int argc, char* argv[])
{
    SAConnection con; // create connection object
    
    try
    {
        // connect to database (in this example it is SQL Server)
        con.Connect(
            "demo",     // database name
            "guest",    // user name
            "secret",   // password
            SA_SQLServer_Client);

        printf("We are connected!\n");

        // Disconnect is optional
        // auto disconnect will occur in destructor if needed
        con.Disconnect();

        printf("We are disconnected!\n");
    }
    catch(SAException &x)
    {
        // SAConnection::Rollback()
        // can also throw an exception
        // (if a network error for example),
        // we will be ready
        try
        {
            // on error rollback changes
            con.Rollback();
        }
        catch(SAException &)
        {
        }
        // print error message
        printf("%s\n", (const char*)x.ErrText());
    }
    
    return 0;
}