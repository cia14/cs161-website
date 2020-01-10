$(document).ready(function () {
    var TAinfo = [
        {
            name: "Sabrina Jesmin",
    	    userName: "jesmins",
    	    officeHours: "",
    	    demoHours: "",
    	    doodleLink: ""
    	},
        {
            name: "Yipeng (Roger) Song",
            userName: "songyip",
            officeHours: "By appointments",
            demoHours: "",
            doodleLink: ""
        },
        {
            name: "Megan Black",
            userName: "blackme",
            officeHours: "Mon & Wed 12-2 p.m.",
            demoHours: "Mon & Thu 2-3:50 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UURRUkJndnZsVHdKfGRlZmF1bHR8OWUxNWI4YjU5ODA3M2MzMjBiMTgxMDI1Y2IzZjdkYjU"
        },
        {
            name: "Erick Branner",
            userName: "brannere",
            officeHours: "Mon 12-2 p.m.",
            demoHours: "Mon 10 a.m.-12 p.m. & Fri 9-11 a.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUt0XzBpd0tac3k4fGRlZmF1bHR8NDY1YmJkYWQxNzU2MzE0ZDhlYjUzYjE5MTQ5ZmU3M2I"
        },
        {
            name: "Jesse Chick",
            userName: "chickj",
            officeHours: "Tue & Thur 9-10 a.m.",
            demoHours: "Mon 9-11 a.m. (except Mon 1/20 -> Fri 1/17)",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUhyeWdSeTA2MzJIfGRlZmF1bHR8Mzc2ZTM5NDlmNjczNGM4ZTBmYWU4ZDBjNTNlZmQyNmI"
        },
        {
            name: "Louis Duvoisin",
            userName: "duvoisil",
            officeHours: "Mon & Fri 12:00-2:00 p.m. | Tue & Thur 11:30 a.m.-2:00 p.m. | Wed 12:00-1:00 p.m.",
            demoHours: "",
            doodleLink: ""
        },
        {
            name: "Jessica Garcia",
            userName: "garciaj3",
            officeHours: "Mon 6-7 p.m. & Wed 8-9 a.m.",
            demoHours: "Weeks 2-5: Tue 4-5 p.m. & Wed 9-11 a.m.;<br> Weeks 6-10: Tue 2-5 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUtkOWh0TGc2M3JMfGRlZmF1bHR8ZjhkYjkyOWNiMjU3ODFlYjdjN2M1ZTk5NzNhZTdkOTM"
        },
        {
            name: "Miguel Gaspar",
            userName: "gasparmm",
            officeHours: "Fri 9:30-11:30 a.m.",
            demoHours: "Tue 10-11 a.m. & Wed 4-5 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUVOdlg1Y1dBZDZPfGRlZmF1bHR8Yzg4MWIwM2Q0MThhOTgxYTZlMzI2MGZjNTQ4YTU4YTE"
        },
        {
            name: "Shaurya Gaur",
            userName: "gaurs",
            officeHours: "Thu 10-11 a.m. & Fri 12-1 p.m.",
            demoHours: "Wed & Fri 1-2 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUlsc0toVW1tV2hafGRlZmF1bHR8YjAzYTYzNWEwZTI3MDRjMGQ2N2E3NzZmMjkyZjU4NGE"
        },
        {
            name: "Laura Jiang",
            userName: "jianglau",
            officeHours: "Mon & Fri 10 a.m.-12 p.m.",
            demoHours: "Tue & Wed 10 a.m.-12 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUlFaGp3TnlmZlRBfGRlZmF1bHR8ZWFkNzE2ZjE0Njc3OWM2Yzg2ZGRmOTRiMmNiNDZmNjY"
        },
        {
            name: "Thang Kim (LK)",
            userName: "kimth",
            officeHours: "Tue 10-11 a.m.",
            demoHours: "Wed 12-2 p.m.",
            doodleLink: "https://doodle.com/poll/gv3vv7tms3hnsw55"
        },
        {
            name: "Jason O'Brien",
            userName: "obriejas",
            officeHours: "Tue 10 a.m.-12 p.m.",
            demoHours: "Wed & Thu 10 a.m.-12 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUlDLWg3Q2pObXBufGRlZmF1bHR8Yzg0NWRlOTJhOTIyOGY2Yzk1OGQyYzc2ODA1MGYxMWQ"
        },
        {
            name: "Lucas Pichette",
            userName: "pichettl",
            officeHours: "Tue 8-10 a.m. & Wed 2-5 p.m. & Thur 8-10 a.m.",
            demoHours: "Wed 10 a.m.-12 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUpjdmJPZ0tzRUpPfGRlZmF1bHR8NzQ0MTQ2MzhkOTY3OTdmNDJiODlhYjQwNDI4NjdlZWU"
        },
        {
            name: "Maddie Smith",
            userName: "smitmad9",
            officeHours: "Wed 1-3 p.m.",
            demoHours: "Mon 1-3 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUJmQzIxb3VyZFJBfGRlZmF1bHR8ZTk5ZDE1NTNjYmFmMWExMWNmODMxYzRiOTIxNGVmZWQ"
        },
        {
            name: "Zachary Taylor",
            userName: "taylozac",
            officeHours: "Mon & Fri 2-3 p.m.",
            demoHours: "Wed 2-5 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUxqNWxQZzNGV2l4fGRlZmF1bHR8M2JlNTg0YThjMTg0NTc0OGZhOTk0YmI5YzY3MjM2NjY"
        },
        {
            name: "Austin Wilmoth",
            userName: "wilmotha",
            officeHours: "Thur 10 a.m.-12 p.m.",
            demoHours: "Tue 10 a.m.-12 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUVrUDQ0ZWVNZVVffGRlZmF1bHR8N2FjOTc0ZGRiY2IwMjA5MWIzM2RlMDIyNjdhODE4NjI"
        },
        {
            name: "Cheng Xie",
            userName: "xiech",
            officeHours: "Mon 3-4:30 p.m. & Tue 1:30-2:30 p.m.",
            demoHours: "Mon 12-1 p.m. & Tue 2:30-3:30 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UU5wOEl3QjBVdDZVfGRlZmF1bHR8ZmRlNDU2NTg2OWUwMTNhMmFjNjg1YjkwN2JiZDE3NDI"
        },
        {
            name: "Arthur York",
            userName: "yorkar",
            officeHours: "Wed 10-12 p.m.",
            demoHours: "Tue 12-1:50 p.m. & Thur 12-1:50 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UUE3bDlIU2FhZFJ6fGRlZmF1bHR8OGYwY2NlZGMzYTNjMDNmNTNlYjE1MTk5OGMxMWI4NmY"
        },
        {
            name: "Junze Zhang",
            userName: "zhanjunz",
            officeHours: "Tue 5-7 p.m.",
            demoHours: "Tue 12-2 p.m.",
            doodleLink: "https://calendar.google.com/calendar/selfsched?sstoken=UU5PLTNmNHEwb3c0fGRlZmF1bHR8YzBhZGI0YTY2ZTJjMWU1ZTM1NTFmNzkxNjRmNzgyNDY"
        }
    ];

    var table = '<table class="TAHoursInfo" width=100%>';
    table += "<tr><th width=20%>Name</th><th width=10%>Email</th><th width=35%>Office Hours (DEAR 119)</th><th>Grading Hours (KEC 1174)</th></tr>";

    for (var x = 0; x < TAinfo.length; x++) {
        table += "<tr>";
        table += '<td>' + TAinfo[x]["name"] + "</td>";
        table += '<td><a href="mailto:' + TAinfo[x]["userName"] + '@oregonstate.edu">' + TAinfo[x]["userName"] + "</a></td>";
        table += '<td>' + TAinfo[x]["officeHours"] + "</td>";
        table += '<td><a href="' + TAinfo[x]["doodleLink"] + '">' + TAinfo[x]["demoHours"] + "</a></td>";
        table += "</tr>";
    }
    table += "</table>";
    $(".TAHours").append(table);
});
