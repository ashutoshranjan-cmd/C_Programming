const body = document.getElementById('body');

const place = ["India", "India"];


for (var i = 0; i < place.length; i++) {
    var firstdiv = document.createElement('div');
    firstdiv.classList.add('flexbox');
    firstdiv.classList.add('firstdiv');


    var place_name = document.createElement('h4');
    place_name.innerHTML = place[i];
    place_name.classList.add('flexbox');
    place_name.classList.add('place_name');


    var time = document.createElement('h4');
    time.classList.add('flexbox');
    time.classList.add('time');
    getTime(i);
    setInterval(getTime, 1000);


    firstdiv.appendChild(place_name);
    firstdiv.appendChild(time);

    body.appendChild(firstdiv);

}



function getTime(i) {
    if (i == 0) {
        time.innerHTML = new Date().toLocaleString("en-US", { timeZone: 'Asia/Kolkata', timeStyle: 'medium', hourCycle: 'h12' });
    }
    else if (i == 1) {
        time.innerHTML = new Date().toLocaleString("en-US", { timeZone: 'Asia/Kolkata', timeStyle: 'medium', hourCycle: 'h12' });
    }
}