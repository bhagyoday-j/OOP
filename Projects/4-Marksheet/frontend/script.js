fetch("../result.json")
  .then(response => response.json())
  .then(data => {
    
    document.getElementById("studentName").textContent = data.name;
    document.getElementById("motherName").textContent = data.motherName;
    document.getElementById("prn").textContent = data.prn;

    const tbody = document.getElementById("marksTable");
    data.subject.forEach((subj, i) => {
      const tr = document.createElement("tr");
      tr.innerHTML = `<td>${i+1}</td><td>${subj}</td><td>${data.marks[i]}</td>`;
      tbody.appendChild(tr);
    });

    document.getElementById("total").textContent = data.total + " / " + (data.subject.length * 100);
    document.getElementById("percent").textContent = data.percent.toFixed(2) + "%";
  })
  .catch(err => console.error("Error loading result.json:", err));