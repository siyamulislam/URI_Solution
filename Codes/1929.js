const input = require('fs').readFileSync(0, 'utf8').trim().split(' ').map(Number);

const [a, b, c, d] = input;

function triangle(x, y, z) {
    return x + y > z && x + z > y && y + z > x;
}

if (
    triangle(a, b, c) ||
    triangle(a, b, d) ||
    triangle(a, c, d) ||
    triangle(b, c, d)
) {
    console.log('S');
} else {
    console.log('N');
}
