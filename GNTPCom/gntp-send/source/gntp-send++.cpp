#include <growl++.hpp>

/*
int main(int argc, char **argv)
{
	char *n[2] = { "alice" , "bob" };
	Growl *growl = new Growl(GROWL_UDP,"password","gntp_send++",(const char **const)n,2);
	growl->Notify("bob","title","message");

	delete(growl);

	return 0;
}
*/

int main(int argc, char **argv)
{
  char *n[2] = { "notify", "warn" };
  Growl *growl = new Growl(GROWL_TCP, NULL, "gntp_send++", (const char **const)n, 2);
  growl->Notify("notify", "hoge", "fuga");

  delete(growl);

  return 0;
}

