autowatch=1
inlets=1
outlets=2

var _debug = false;
var a = new Array();
var args = joex.GetArgs(jsarguments)[0]

function anything(){
	a = String(arrayfromargs(messagename, arguments).join(" ")).split(args[0]);
	if (_debug){
		post(a.join("\n"));
		post("\n"+a.length+" elements\n");
	}
	bang();
}

function debug(i){
	if (i != 0){
		_debug = true;
	}
	else {
		_debug = false;
	}
}

function bang(){
	for (var i = 0 ; i < a.length ; i++){
		if (Number(a[i])!="NaN"){
			a[i]=parseFloat(a[i])
		}
	}
	outlet(0,a);
	outlet(1,a.length);
}