$(document).ready(function () {
var times = [
        {
            Section: 25,
            Day: "M",
            StartTime: 800,
            Type: "Lab",
            TAs: ["Arthur York", "Laura Jiang"]
        },
	{
            Section: 26,
            Day: "M",
            StartTime: 1000,
            Type: "Lab",
            TAs: ["Louis Duvoisin", "Jason O'Brien"]
        },
        {
            Section: 27,
            Day: "M",
            StartTime: 1200,
            Type: "Lab",
            TAs: ["Austin Wilmoth", "Thang Kim", "Shaurya Gaur"]
        },
        {
            Section: 29,
            Day: "M",
            StartTime: 1600,
            Type: "Lab",
            TAs: ["Miguel Gaspar", "Jessica Garcia", "Megan Black"]
        },
        {
            Section: 22,
            Day: "W",
            StartTime: 1000,
            Type: "Lab",
            TAs: ["Jesse Chick", "Erick Branner"]
        },
        {
            Section: 30,
            Day: "W",
            StartTime: 1600,
            Type: "Lab",
	    TAs: ["Jessica Garcia", "Austin Wilmoth", "Maddie Smith"]
        },
	{
            Section: 21,
            Day: "R",
            StartTime: 800,
            Type: "Lab",
            TAs: ["Laura Jiang", "Arthur York", "Megan Black"]
        },
	{
            Section: 23,
            Day: "F",
            StartTime: 800,
            Type: "Lab",
            TAs: ["Lucas Pichette", "Junze Zhang", "Shaurya Gaur"]
        },
	{
            Section: 24,
            Day: "F",
            StartTime: 1000,
            Type: "Lab",
            TAs: ["Austin Wilmoth", "Jason O'Brien"]
        },
	{
            Section: 28,
            Day: "F",
            StartTime: 1200,
            Type: "Lab",
            TAs: ["Cheng Xie", "Jason O'Brien", "Megan Black"]
        },
	{
            Section: 31,
            Day: "F",
            StartTime: 1600,
            Type: "Lab",
            TAs: ["Cheng Xie",  "Erick Branner", "Zach Taylor"]
        }
];
    
    function convert24to12hour(hour) {
        var twelveHour = hour;
        var ampm = "";
        if (hour > 1300) {
            twelveHour -= 1200;
            ampm = " p.m.";
        } else if (hour <= 1300 && hour >= 1200) {
            ampm = " p.m.";
        } else {
            ampm = " a.m.";
        }
        var hours = Math.floor(twelveHour / 100)
        var minutes = twelveHour - (hours * 100);
        if (minutes === 0) {
            return (hours).toString() + ":00" + ampm;
        }
        return (hours).toString() + ":" + minutes + ampm;
    }
    
    var table = '<table class="labsTable">';
    table += "<tr><th>Section</th><th>Day</th><th>Time</th><th colspan='3'0%>TAs</th></tr>";

    for (var x = 0; x < times.length; x++) {
        table += "<tr>";
        table += "<td>" + times[x]["Section"] + "</td>";
        table += "<td>" + times[x]["Day"] + "</td>";
        table += "<td>" + convert24to12hour(times[x]["StartTime"]) + " - ";
        table += convert24to12hour(times[x]["StartTime"] + 150) + "</td>";
        for (var y = 0; y < (times[x]["TAs"].length); y++) {
            table += "<td>" + times[x]["TAs"][y] + "</td>";
        }
        table += "</tr>";
    }
    table += "</table>";
    $(".labs").append(table);
});
