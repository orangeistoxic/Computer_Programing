助教您好

以下是我在做題時遇到有些不太理解的地方，或是不太會時所做的一些調整，我怕純粹只有Code的話可能不容易表達清楚。

Fig06_20.cpp 等作業給的檔案我都沒有做更動，，不太確定作業的意思的是不是要附上這段程式的運行結果，為了保險我有附上。

做題的部分是Date.cpp Date.h Lab04.cpp三個部分，雖然教授有在公告說 " 再新增兩個檔案，以符合HW4 的需求 " ，但是上屆的螢幕截圖是兩個程式是分開執行的，所以為了保險起見我也將程式分開，故，有三個程式。

在E3上有寫道

 member function:
        Set Birthday[10]  
                 just like the example at page 41-45
      	Sorting Birthday
                 from  Young  to old  

首先，我不太確定function後能不能加[]，所以我是採用pages41-45的範例下去做的，將主程式(Lab04)下宣告一個 類型是date的array的方式來完成。

其次，我左思右想之後覺得將sorting的function放在date內實在不太舒服，所以我只有做一個比較當前與下一個人的生日，實際交換的部分還是放在lab04。
原本是想要連交換都放進去member function 裡面，但是我發現swap(a,b)好像在這種狀況不會正常運作，他會用b覆蓋掉a，而不是交換，以下是當初失敗的寫法：

void Date::InfoSwap(Date anotherperson){
	swap(ID,anotherperson.ID);
	swap(Year,anotherperson.Year);
	swap(Month,anotherperson.Month);
	swap(Day,anotherperson.Day);

}

ps:變數都是public。

或許是我哪裡沒注意到，還請助教指正。

還有.vscode資料夾請無視他，謝謝。

謝謝助教撥空看我這一段內容，批改辛苦嘞。o(｀ω´ )o

