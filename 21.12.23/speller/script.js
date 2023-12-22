const button = document.querySelector('button');

const input = document.querySelector('input')

const results = document.querySelector('div');

button.addEventListener('click', function(event) {
  event.preventDefault()
  const text = input.value;
  fetch('https://speller.yandex.net/services/spellservice.json/checkText?' + text.replaceAll(' ', '+'))
    .then(function(response) {
      console.log(response);
      return response.json();
    })
    .then(function(json) {
      console.log(json);
      const ul = document.createElement('ul');
      for (let elem of json) {
        const li = document.createElement('li');
        li.innerHTML = elem.word + ' -> ' + elem.s[0];
        ul.append(li);
      }
      results.append(ul);
    })
})
