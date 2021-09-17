#include "ShrubberyCreationForm.hpp"

void putTree(std::ofstream &ofs) {
	srand(time(NULL));
	switch (rand() % 3) {
	case 0:
		ofs << "                                                                WW                                  \n"
			   "                                  NKOkxxkOKW WW            NKOkxxxxk0NW                             \n"
			   "                                 KdllloollldxxxxOKK0OOO0XXOdlllllolllokN                            \n"
			   "                                NxlooloooolclolcclllllllolclooooloooolckW                           \n"
			   "                              XOxlcoooooooooool:coloooooolclooooolloooclxkkkKW                      \n"
			   "                          WNKOo:cclooooooolllcc::looooooooooooooolooolcclllllkW                     \n"
			   "                        XOxoollccccclooollcccclccllooooooloollcccloooooooooocdN                     \n"
			   "                      WKdloooooooolc:cccc::lollolloooooollccccllcccloooooolccOW                     \n"
			   "                      NxloooooooooolllolllllooooooooooollcllllooocclooooollccoxOXW                  \n"
			   "                   WX0kocllloollooooooooooooooooooooloolllooooooolcclooooooooollo0W                 \n"
			   "                 WKxolllllllooooooooooooooooooooooooooooooooooooooc:loloooolooooclxkOX              \n"
			   "                W0olollolooooooooooolooooooooooollccccclloooooooollloolloooooool:cllcdXW            \n"
			   "                Xdlolooooooooooooooooooooooooooolcccllcc:coooooooooooooooooolc::clolccdxx0N         \n"
			   "                Olllooooooooooooooooooooooooooooolooooooc::ccllccllooooooololc::clollllllcxN        \n"
			   "           WN0Okollloooooooooooooooooooooooooooooollloool::lcccclccloooooooloooc:coooollocoK        \n"
			   "         WXkollloololoolooooooooooooooooooooooooooooooolc:loooooolcloooolooloool:coooloollOW        \n"
			   "        W0olloooolclloooooooooooooooooooooooooolllllllc::cloooollcllooollllollc::looooolclOW        \n"
			   "        Xdloloolol:loooooooooooooooooooooollooolllccccclccllolooccloooolc:ccc::cloooolooollO        \n"
			   "        Olloooloolccclooooooooooooooooooooooolllloooooolcclollllcccccccc:clll::ccllooooolll0W       \n"
			   "        Olloooooool:clooooooooooooooooooollclc:lddooolccclooollllllccccllooolccccc:colclxkXW        \n"
			   "        Kolooooolol:cloollloooooooooooooool:;::l0NNNNkcclllcllloooooooooooooooooooc:llckW           \n"
			   "        W0ollcclllolccccc:clllloolllolllllc::cc:oKNWXd:::::clcloloooooloooooooooolclddON            \n"
			   "         WKoccllloooollllccccccccccloocokxl:ccc::loolccccc:x0ollollloooooooooollccdKNW              \n"
			   "         WOllooooooollooloollllllooolc:xWW0lcccc::ccc:ccc::OWKo:;:clooooooolloollllxX               \n"
			   "         WkllololllloooooooooooollccodloONNxccccc:::::ccc;lX Ko:cc::::clllllloooooldK               \n"
			   "          NOdlllc:clooolooloollollccdK0o:oxo::ccccccccccc;dWNkcccc;;:;;clllcllllllo0W               \n"
			   "            NK00kocoooooollllooolllcodlc:cccc::ccccccccc:;kNkc::ccllolc:ccclllldO0N                 \n"
			   "                WOllloolllclddddxxkKWWKxcccc:;:ccccccccc;:xx::c:coooollllllllloK                    \n"
			   "                 WKkxddddxOXWWWWW      W0l:c::ccccccccc:,,::;cddddoooxOXKOkkkOKW                    \n"
			   "                     WWWW                0c:::ccccccccc:,.,ckXW  WNXNW                              \n"
			   "                                         No;::cccccc::c:,.;OW                                       \n"
			   "                                         No,:cccc:;;;;;;''xW                                        \n"
			   "                                         Nl':ccc:;;;;:;,';O                                         \n"
			   "                                         Xl':ccc;;;;;;;,,;k                                         \n"
			   "                                         0c,:ccc:;;;;;;;;,dW                                        \n"
			   "                           WNXNNW      WWk:;:cccc::::::::;cK                                        \n"
			   "                           WKxdkO0XXK0kO0o:::ccccccccccc;;:kW WX0KXNW WNK0KW                        \n"
			   "                      NKO00KKKxdkxxkxdooc;;:cccccccccccc:::l0NX0xoxkO0OxooxOO0XW                    \n"
			   "                      NOdlloxxddkxdlcc::;;:cccccccccccccc::;:loxxdxkkkkkxxxdodkXW                   \n"
			   "                      N0OOOOK0ko:;,;;:::::c::cc::::::ccccccc::::ccldO0KKKKKKKK0KW                   \n"
			   "                             WXkxxxxxxkkkOOOkdl:::ccccc;:c::::::;;,;:okN                            \n"
			   "                                              NKkxdolc;,:k0OOkkkkkkkOOKN                            \n"
			   "                                                   WNK0O0N                                          \n";
		break;
	case 1:
		ofs << "                                       NXX000xOWWX0KKN                 WXXN                         \n"
			   "                     WXKNX00O00KW    WNOO0KN NK000KX0K   WNW NK00O0000000000KN                      \n"
			   "                 W X00OKX0OOONXO0OOKX0ddK      WWW WKONNOOK0kk0OkxdkOKNXXWNXk0W                     \n"
			   "                  NOONNWNOk0O0OkdOK0kk00O0XXK0KWWW NOOKO0XWNKN WKKN0xkO000KKkx0KW                   \n"
			   "                 WOdd0N0O0NWNK00XW NKN  WKKXNKkOXXKKxx0KW           W0xKWN0kOX0xK                   \n"
			   "             W  W0odkxO0KWNk0WKd0       NXWXXWXXWNXNXk0            Xkk0N N00OXKx0NW                 \n"
			   "          WWWX00OkOX NkxXWWxdXOdX      W0xO0NWN0KW   K0NKXWWW WW N0ddX WXO0NX0OxlxXW                \n"
			   "       NX000KOx0XW    KON  0okkkW     NOdkXW NX0XW   WXK0OOkxOxOKOocO  Nk0  WNX0OKXKX               \n"
			   "     WXOOKN XxkNW   W KxKW0OkO0OW   WWOoON   N0N         WNKOdloOkcxW WKk0XXW      X0KNW            \n"
			   "     Kx0N WW0kKNNXXNXKK0KWKkx0K0N    X0XWWWWNKKN           WKkOkOooX WXxoddkX       WXO0W           \n"
			   "    WOON WXXK00OxdkOOOO0KNWWXKK0XW  WKOKNXKKNW   WXW       WXKKxkk0WN0ooxlxWW        KkK            \n"
			   "    WOONK00000XKOKWX0K0O0O0W W0xx0K0OO0X  WWN00KK0OOOKKN     X00kxO0OkOKKOkOKKKXNW X0OxKWNKXW       \n"
			   "     KOkx0KKX         WX0OXWXkodo:dkdKW X0KX0xXWWW X00kkN W  X0XOxk0N  X00xokX000O0kddx00KKk0N      \n"
			   "   WNW XkxON W     W  NOk0N WKKXkoodkXWXk0XKO0W      W0kKNW X0KK00NW NXOOXXKN WWWKOO0xkW  WKx0W     \n"
			   "  WKOKOdON00XKNWW WWNKOccKW  XKWXxdxOXNkOW            NOOXXX0KWXOKNWX0KXO0W      WW0kkOKN  XO0XW    \n"
			   "X000N NKKNNKKK0OkOk0OkKKl:OXNNK0X0o0NK00XXKXWW        N0xkKKOOOOkOK0KNWWNO0N    W  W0xkOX  WKkkX    \n"
			   "00WWWW  K0N   WXOOO0XNNKOddkkdoxKNdlX0xkkO0OxkN WNXNWW0k0N  W0ododXW     NxdO0X0ON XO000NWX0koON    \n"
			   "OK   XkOXK0XW   N0kkKKkOXkoOWXxxOklc0KdOKOXWOcdKXKXXXKk0W W Kdx0kkX      K:l0kOddKX0KWWXOOO0OkOk0N  \n"
			   "k0   WKkk0Kkx0XNNXOkkON      WNWWKOOKWK0NXKKkx0N      Xk0WNkoxxkNXXW    Nl:0XOOKNNNWW  KkKK0KNKxk00K\n"
			   "kxXWWW  N0OOk0K0kxxxKNW      W  WWXOkKWKOX  0kN       Wxo0dokKKk0NNW   No;xO0KN       W0xxkX  WNWNOO\n"
			   "dKXKK00KKOO00XWWKxllOW          W0kKXNNWKxOKddX       WdoK00XW0OWWNNWWXxcxXNW   WNN KOX0xxKW     WKk\n"
			   "kX WX000O0KKOk0N WXxxK00XKXWXKWKO0KK0XNKXXkxxON      NOkO0KW  K0NNKKK0dok0KXWWXNXO0KO0NWKdxXW    N00\n"
			   "X0KKOKXK0NN0K0ddKNNKOXNKKKOkdoodX WNOodxodX KOX    N0OOOOX  N00XW Xdlx0XKXXOdOKXKXWNKkdxkOOOON  WXkK\n"
			   " XO0N        WNOoxXNkOK00NWN0xdxOXW  OlloolkXOxxxdod0KxkXKKXOON  W0ookN WXOxkXWW WKkxdk0KKkONWNXNOkN\n"
			   " 0xX         N0kkddXK0NX00X NxcxO0NNWKdkO0XOx0KOkO0NXocdxONXKXWWNXOOKOKXkx0NWNNN0ddkKNW  Xkx0K00KKKW\n"
			   " XxxO0XXXXXNK0XNNXOOXNNWXOKW WOdxdONNKodkoOWXddX  W klKXkk0Ok0KOk0KXNkxkdO0OOxdkxdxxx0NW WNKOKW     \n"
			   "  NKOx0K00KKKN    WNKKXXkxX   WkxkkN NOxdco0X0xK    kdN  WNNKOKkOkxX0x0XkddxxkO0XNWWXXX0KNWNOON     \n"
			   "    WXK0KNX00XW WNW WNX0kodKW  Ndd0KW NkdkxodON     OoK      WxlK0kKKXXOdOXW WNNW WXKKkO000k0N      \n"
			   "      WXXXKKK0KNX0KK0XWKKXOkk0N Kld0KW W0O0ddxokNNKOl:k    WNxcOX00XXNWNO00OXKOOOkOOKXN WNKNW       \n"
			   "              WW   NXNW  WNX0O0OOl:k0KW N0kXNN0ckWNXKooX  N0kkOxxONW   WX0KKK00WNKKNWW              \n"
			   "         W                 WNX0lldxKOxOX WKOKNKlxWW WXdlollkOxx0W    W      W                       \n"
			   "                              NK0OkdkXK0KNWNK0KkxXNWWWWKkdclxKW                                     \n"
			   "                                 WXKXNNWN0k0NKxloOKXW   NOxKW                                       \n"
			   "                                     WWNXkx0X0kkN      NOON                                         \n"
			   "                                        WXKKNWNK0KWW WWOxX                                          \n"
			   "                                          WKOkOkdONW O:,xW                                          \n"
			   "                                            W0dkNW   Kl;O                                           \n"
			   "                                             WKlxW    Xx0                                           \n"
			   "                                               OcdxxkXXkK                                           \n"
			   "                                               Kl:lldXXOK                                           \n"
			   "                                               XOXW   XOK                                           \n"
			   "                                               XOKW   XkK                                           \n"
			   "                                               NOK WNKkdK                                           \n"
			   "                                               Nk0 Nkocc0                                           \n"
			   "                                               Xk0 WW Xx0                                           \n"
			   "                                               Xx0  W XdO                                           \n"
			   "                                               KlokOKNKdO                                           \n"
			   "                                               0cldxOK0dO                                           \n"
			   "                                               koX  W XdO                                           \n"
			   "                                               xoN W  Xok                                           \n"
			   "                                              WddNXX0kdck                                           \n"
			   "                                              XldXK0xlcck                                           \n"
			   "                                              0lO     Xdk                                           \n"
			   "                                              OoK     Xdk                                           \n"
			   "                                              OkW     XdO                                           \n"
			   "                                             WK0XNWW  Kx0                                           \n"
			   "                                              NKOOOkO0O0W                                           \n";
		break ;
	case 2:
		ofs << "                                     WWWWKkxddxxxxxxxdk0N                  W                        \n"
			   "                                     WXxodxk0KXNNNXXK0kdlkN WWWKkxxdxxON WW                         \n"
			   "                                    WKcoXW         W   W0:cdxdooxO00Okdod0W  W                      \n"
			   "                               NOxdxx::0                WKO0xd0W      WXdcO  W                      \n"
			   "                      WKkkxxOXOlok0XXKKW                  WW  W   W  WWWWocX WW                     \n"
			   "                 W WKdddxkkkdocxNNW   W                 W  WXkddddONWW  Nc;xXWW                     \n"
			   "                WWKolkXWW  WKdldxkK                   NOoddlco0KKkclK   W0kxldK                     \n"
			   "                 0cdNW   W 0:oKN      W              KllOXKxOW    K:d       NccKWW                  \n"
			   "                 ocN WW  W K::0W         W          XclN          X::O0N     0odxddON               \n"
			   "                 xcK WW WXxdolOW          WW      WW0:xWW         KddxolOW     WWXOol0W             \n"
			   "                Xd;oNW  KclKW             OckW      Xl;O            WWWd:0  WXxOWWWWdcK             \n"
			   "              Wkcd0XW   x:O              Xl;oolooddddl'o              Wx:0 WWNlcX W K:dW            \n"
			   "              k:kWWW    XocON         WNO:.;kx;.:OKXNNxcxXW     KO0K0kolOW NKdckW   0:x             \n"
			   "            W k;kWWW     NOodddxxkxxllddddl,;;;;oW  WWW0:,:ldxxdcldddx0NWWNd;oK  WNKllX             \n"
			   "             WXo,:oK     WW WX0OkkkOk:cX WNk:ckclW  WKxodl'cOkkOXWW       Wk:kWWKxxl;dW             \n"
			   "            XxodxxOX                 x,k    Kcoxlodddodddo,lN   W  WW     XlcK WWWWNO:dW            \n"
			   "           0coKW                 NX0d;.cK   WXll00kk00olkNO:dN   WXxdkOOxdoxXWWW    K;;dxKWW        \n"
			   "          XcoN                  Wx,,,';cc0W WWO:x  Wk:xNWWKc.:dddl;cxxdxk0N    W    X000xcxW        \n"
			   "          O:kW                  Nl':::dKklokN x:0 W0:dWWN0c';dkdo;,k  W                 Wd:0        \n"
			   "        WWKcx              X0OOxloOOxdddkKOddo:dW  x,oxdddkdoxxddc'x WW                 NlcX        \n"
			   "        WWWxc0W          WWKxdxkKW  WKl,',xNNOON   Xxxk0K0OkxxxocldK              WWWNKxloKW        \n"
			   "           WkcdKW       Ndc0W      NOclkkxclX       WW0dodxkk0K0clNWWW           Nxcoxdx0WW         \n"
			   "             XxddddxxdddddoldxOOkxddoON   XllX  WXOx0XclN       Kolx0XXOdkXNWWWXKkclKW  WWW         \n"
			   "                NKOOOO0XW  N0kxxxk0NW      0:x  Wkc,dO:k         WKxddddxddxxxxxdx0W                \n"
			   "                                           Nco   d..lx:O                   WWW                      \n"
			   "                                           WllW Wo..:o:O                                            \n"
			   "                                            ocN Wd'.;ock                                            \n"
			   "                                            dcN  0o':Ocd                                            \n"
			   "                                        W00WdcX  WNOOWocN                                           \n"
			   "                                       Xo.lNdcX     WWO:k     W                                     \n"
			   "                              WWW   W Kl:;d dcK  WNXN NllN    WW                                    \n"
			   "                         W    0ccxK0ldco0:,docO0xc:cd0NO:oOxlcoK                                    \n";
	}
}

void ShrubberyCreationForm::execute( Bureaucrat const &executor ) const throw(std::exception) {
	if (executor.getGrade() > this->execGrade)
		throw GradeTooLowException("grade too low");
	if (not this->isSigned)
		throw std::runtime_error("form not signed");
	try {
		std::ofstream ofs((this->target + "_shrubbery").c_str());
		ofs.exceptions(std::ofstream::failbit | std::ofstream::badbit);
		putTree(ofs);
		ofs.close();
	}
	catch (std::ofstream::failure &exeption) {
		throw std::runtime_error("failure to open file " + this->target + "_shrubbery");
	}
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", "none", false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const &target ) : Form("Shrubbery Creation", target, false, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other) : Form(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other ) {
	this->target = other.target;
	this->isSigned = other.isSigned;
	return *this;
}
