char* date2str(int day,int month,int year)
{
if (day > 31 || month > 12) return "Invalid"; 
    
    char* digits = "0123456789";
    
    char* date = (char*) malloc(11);
    
    // day conversion
    date[0] = digits[day / 10];
    date[1] = digits[day % 10];
    
    // month conversion
    date[3] = digits[month / 10];
    date[4] = digits[month % 10];
    
    // year conversion
    date[6] = digits[year / 1000];
    date[7] = digits[(year / 100) % 10];
    date[8] = digits[(year / 10) % 10];
    date[9] = digits[year % 10];
    
    date[2] = '.';
    date[5] = '.';
    date[10] = '\n';
    return date;
}