#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int playquiz();

int main()
{
    system("Color 70");
    cout << "\nPress Enter to start the quiz... " << endl;
    cin.get();

    char play_again;
    int final_result = 0;
play:
    final_result = playquiz();
    if (final_result >= 8)
    {
        cout << "your score is : " << final_result << "\nyou are pass the quiz" << endl;
        cout << "do you want playagain 'y' or 'n'? " << endl;
        cin >> play_again;
        if (play_again == 'y' || play_again == 'Y')
        {
            goto play;
        }
        else
        {
            cout << "Thanks for playing Quiz_game !" << endl;
        }
    }
    else
    {
        cout << "your score is : " << final_result << "\nyou are fail" << endl;
        cout << "do you want playagain 'y' or 'n' ? " << endl;
        cin >> play_again;
        if (play_again == 'y' || play_again == 'Y')
        {
            goto play;
        }
        else
        {
            cout << "Thanks for playing Quiz_game !" << endl;
        }
    }
}
int playquiz()
{
    char start;
    string Name;
    int Age;
    char start_game;
    int score = 0;
    char option;
playinside:
    cout << "What is your name?" << endl;
    cin >> Name;
    // using transform() function and ::toupper in STL
    transform(Name.begin(), Name.end(), Name.begin(), ::toupper);
    cout << endl;
    cout << "How old are you?" << endl;
    cin >> Age;
    cout << "------------HELLO " << Name << " WELLCOME TO QUIZ GAME--------------\n"
         << endl;
    cout << "------PLEASE FOLLOW THIS RULES AND INSTRACTION-------\n"
         << endl;
    cout << "..................RULES...................\n"
         << endl;
    cout << "RULE NO.1 There are three mode available 'ESAY', 'MEDIUM', 'HARD'" << endl;
    cout << "RULE NO.2 If each mode three round available" << endl;
    cout << "RULE NO.3 If each mode there are 5 question available" << endl;
    cout << "RULE NO.4 You will give 1 marks for each right answer...." << endl;
    cout << "RULE NO.5 There are no negetive marking for wrong answer and wrong option chose...." << endl;
    cout << "RULE NO.6 If your score is <=8 then your pass and vice versa\n"
         << endl;

    cout << "------------------GAME INSTRACTION-----------------\n"
         << endl;
    cout << "STEP NO.1 To strat the game please enter S . . . . . ." << endl;
    cout << "STEP NO.2 : SECLECT YOUR GAME TYPE EASY : MEDUIM : HARD" << endl;
    cout << "STEP NO.3 Please select option between the (a) (b) (c) (d).....\n"
         << endl;
    cin >> start_game;
    if (start_game == 's' || start_game == 'S')
    {
        cout << "PLEASE SELECT YOUR GAME VARIANT" << endl;
        cout << "FOR EASY ENTER ---E---" << endl;
        cout << "FOR MEDIUM ENTER ---M---" << endl;
        cout << "FOR HARD ENTER ---H---" << endl;
    }
    else
    {
        cout << "Your key is worng you are redirect to starting page" << endl;
        playquiz();
    }
    cin >> start;
    // HERE START THE ESAY MODE
    if (start == 'e' || start == 'E')
    {
        cout << "WELL COME TO ESAY MODE : ROUND-1\n";
        cout << "Q1.Who was the first Chief minister of Odisha" << endl;
        cout << "(a) Biju Pattnaik (b) Nabakrushna Choudhary (c) Harekrushna Mahatab (d) Biswanath Das" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q2.In Ancient Times,Odish was known by the name of" << endl;
        cout << "(a) Konkan (b) Kalinga (c) Kurukshetra (d) None of the above" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q3.The famous war of Kalinga was fought in the year" << endl;
        cout << "(a) 261 BC (b) 265 BC (c) 270 BC (d) 296 BC" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q4.The Jagannath Puri Temple was built in the year." << endl;
        cout << "(a) 1001 (b) 1109 (c) 1150 (d) 1161 " << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q5.The Konark Sun Temple was included in the World Heritage site status in the year." << endl;
        cout << "(a) 1970 (b) 1984 (c) 1986 (d) 1990" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "                ROUND-2\n";
        cout << "Q1. Which poet is Known as the Kabi Samrata" << endl;
        cout << "(a) Radhanatha Raya (b) Baladev Ratha (c) Upendra Bhanja (d) Gopabandhu Dash" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q2. Who wrote the book Gita Govinda" << endl;
        cout << "(a) Narottama Dasa (b) Jayadeva (c) Bidyapati (d) Gopabandhu Dash" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q3.In which year Huen Tsang visits Odisha" << endl;
        cout << "(a) 605 AD (b)  630 AD (c) 645 AD (d) 657 AD" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q4. Which one was the capital of Odisha before Bhubaneswar." << endl;
        cout << "(a) Cuttack (b) Puri (c) Rourkela (d) Berhampur" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q5. The Lingaraj Temple at Bhubaneswar was constructed by the " << endl;
        cout << "(a) Satavahana Dynasty (b) Ganga Dynasty (c) Soma Dynasty (d) Naga Dynasty" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "                   ROUND-3\n";
        cout << "Q1. Which ruler started the construction of Konark Sun Temple" << endl;
        cout << "(a) Bhanu Deva I (b) Rajaraja II (c) Indravarman (d) Narasimhadeva I" << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q2. Total number Of District in Odisha" << endl;
        cout << "(a) 25 (b) 27 (c) 30 (d) 32 " << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {

            score = score + 0;
        }
        cout << "Q3. Which one is the largest district Of Odisha by area" << endl;
        cout << "(a) Mayurbhanj (b) Malkangiri (c) Nayagarh (d) Cuttack " << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q4. In which year the first Oriya Magazine 'JNANARUNA' was published" << endl;
        cout << "(a) 1822 (b) 1836 (c) 1842 (d) 1849 " << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q5. On Which river,the Hirakud Dam is built" << endl;
        cout << "(a) Baitarani River(b) Gandaki River (c) Mahanadi River (d) Budhabalanga River " << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
    }

    // THEN START THE MEDIUM MODEimage.png
    else if (start == 'm' || start == 'M')
    {
        cout << "WELL COME TO MEDIUM MODE : ROUND-1\n";
        cout << "Q1.India ’s only Naval AviationMuseum is Located in" << endl;
        cout << "(a)Karnataka (b) Kerala (c) Tamil Nadu (d) Goa" << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q2.The Disaster Management act was enacted in India in the year" << endl;
        cout << "(a) 2003 (b) 2005 (c) 2006 (d) 2009" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q3. The haeadquarters of western Air Command of Indian air Force is located at" << endl;
        cout << "(a) Nagpur (b) Mumbai (c) Jodhpur (d) New Delhi" << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q4.The aircraft carrier Admiral Gorshkov which was brought by India from Russia is renamed as" << endl;
        cout << "(a) INS Godavari (b) INS Trishul (c) INS Vikramaditya (d) INS Trishul " << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q5. How many States in India have legislative Council (Vidhan Parishad)" << endl;
        cout << "(a) 6 (b) 8 (c) 11 (d) 12" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "                  ROUND-2\n";
        cout << "Q1. Which idustry in India is the maximum consumer of water" << endl;
        cout << "(a) Textile (b) Engineering (c) Paper and Pulp (d) Thermal Power " << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q2. The National Police Academy is located at" << endl;
        cout << "(a) ) Abu Road (b) Dehradun (c) Hyderabad (d) Bangalore " << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q3. What was the basis of the reorgannization of states in India in the year 1956." << endl;
        cout << "(a)Religion (b) Caste (c) Language (d) Non of the above" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q4. In which state is Kudankulam Nuclear Plant is located." << endl;
        cout << "(a) Andhra Pradesh (b) Karnataka (c) Kerala (d) Tamil Nadu " << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q5. Which two states are connected by the Palakkad Gap." << endl;
        cout << "(a) Tamil Nadu and Kerala (b) Tamil Nadu and Karnataka (c) Karnataka and Andhra Pradesh (d) Kerala and Maharastra " << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "                      ROUND-3\n";
        cout << "Q1. The first e-passport in India was issued to" << endl;
        cout << "(a) Somnath Chatterjee (b) Pranab Mukherjee (c) Pratibha Patil (d) Narendra Modi" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q2. The Palk Strait separates India from" << endl;
        cout << "(a) UAE (b) Maldives (c) Sri Lanka (d) Pakistan " << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q3. The Sariska Wildlife Sanctuary is situated in the State of " << endl;
        cout << "(a) TPunjab (b) Madhya Pradesh (c) Andhra Pradesh (d) Rajasthan  " << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q4.In which of the following states, Garo, Khasi and Jaintia hills are located " << endl;
        cout << "(a) Jammu and Kashmir (b) Manipur (c) Meghalaya (d) Arunachal Pradesh " << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q5.Which one of the following city is also known as cottonopolis of India" << endl;
        cout << "(a) Ahmedabad (b) Mumbai (c) Surat (d) Kolkat " << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
    }
    // THEN START THE HARD MODE
    else if (start == 'h' || start == 'H')
    {
        cout << "WELL COME TO HARD MODE : ROUND-1\n";
        cout << "WELL COME TO ROUND-1 \n";
        cout << "Q1. 'Berlinale' is the 70th edition of which famous festival, which is set to be inaugurated in Germany? " << endl;
        cout << "(a) Berlin Food Festival (b) Berlin Film Festival (c) Berlin Defence Show (d) Berlin Arts Fair " << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q2. Which Middle East country recently legalized cannabis farming for medicinal use? " << endl;
        cout << "(a) Saudi Arabia (b) Lebanon (c) Oman (d) Yemen " << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q3. Which country is the Chair of the  5 membered BRICS bloc, for the year 2020? " << endl;
        cout << "(a) India (b) Russia (c) Brazil (d) China" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q4. Which country's railways is the first to successfully run Double stack container train in electric zone ?" << endl;
        cout << "(a) India (b) Russia (c) South Korea (d) Israel" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q5. Which international organisation has launched the Alliance for Poverty Eradication, amid COVID-19 pandemic?" << endl;
        cout << "(a) G-20 (b) World Bank (c) United Nations (d) World Economic Forum" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "                          ROUND-2\n";
        cout << "Q1. Which country sent its trial container ship 'MV Shejyoti' through Chattogram port of Bangladesh? " << endl;
        cout << "(a) China (b) India (c) Myanmar (d) Nepal " << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q2. Who is set to become the first non-white person to feature on a British coin ? " << endl;
        cout << "(a) Babasaheb Ambedkar (b) Sardar Vallabhbhai Patel (c) Netaji Subhash Chandra Bose (d) Mahatma Gandhi " << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q3. Which country has allowed flights from all countries to cross its skies to reach the UAE?" << endl;
        cout << "(a) India (b) Pakistan (c) Saudi Arabia (d) Turkey " << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q4. Which country has signed the Arab Accord along with UAE and Bahrain?" << endl;
        cout << "(a) Israel (b) Egypt (c) Palestine (d) Italy " << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q5. Which African Nation is celebrating its 60th Independence day on Oct 1, 2022 ? " << endl;
        cout << "(a) South Africa (b) Nigeria (c) Egypt (d) Zimbabwe " << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "                          ROUND-3\n";
        cout << "Qa. India has signed agreement with which country for establishment of 'Emergency Medical' Services ? " << endl;
        cout << "(a) Sri Lanka (b) Maldives (c) Mauritius (d) Bangladesh " << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q2. Mohamed Irfaan Ali has been sworn in as the new President of which South American country ?" << endl;
        cout << "(a) Guyana (b) Venezuela (c) Brazil (d) Columbia " << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q3. Google has partnered with which nation to develop flood warning service?" << endl;
        cout << "(a) India (b) Sri Lanka (c) Nepal (d) Bangladesh " << endl;
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q4. Which oil producing nation has reduced its daily oil production beyond the requirement by OPEC +?" << endl;
        cout << "(a) Russia (b) Azerbaijan (c) Iraq (d) Iran " << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q5. India recently voted in favour of a COVID-19 related resolution in which forum? " << endl;
        cout << "(a) ASEAN (b) IMF (c) UNGA (d) World Bank  " << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
    }
    else
    {
        cout << "YOU HAVE ENTER WRONG KEY YOU ARE REDIRECT TO STARTING PAGE" << endl;
        goto playinside;
    }
    return score;
}