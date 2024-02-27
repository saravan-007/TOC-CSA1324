Automaton Simulator, v1.0
turing {
	alphabet {abcd*_}
	state {
		initial {yes}
		coord {217 153}
	}
	state {
		coord {484 149}
	}
	state {
		coord {733 163}
	}
	state {
		final {yes}
		coord {227 288}
	}
	edge 0 1 {
		transits {a}
		offset {0.5235987755982988}
		direction {R}
		output {c}
	}
	edge 1 2 {
		transits {b}
		offset {0.6045652465230947}
		direction {L}
		output {d}
	}
	edge 1 1 {
		transits {a}
		offset {1.6364911283473615}
		direction {R}
		output {d}
	}
	edge 2 2 {
		transits {a}
		offset {1.3539227111284884}
		direction {L}
		output {d}
	}
	edge 0 3 {
		transits {_}
		offset {0.8555171333774616}
		direction {R}
		output {d}
	}
	edge 2 0 {
		transits {c}
		offset {0.56541191917358}
		direction {R}
		output {c}
	}
}
