/*
 * combanalysis.c
 *
 * Author : Ronald Pereira
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
 
 #include <stdio.h>
#include <stdlib.h>

unsigned long long int exponencial(int n, int r){

	unsigned long long int p = 1;
	int i;

    for(i = 0; i < r; i++){
        p *= n;
    }
return p;
}

unsigned long long int fatorial(int i){

    unsigned long long int fat = 1;

    for(; i > 1; --i)
        fat *= i;

return fat;
}

void possib_caso1(int n, int r){

	int a, b, c, d, e, f, g, h, i, j;
	int pos[10]={1,2,3,4,5,6,7,8,9,10};

		if(r == 1){
			for(a = 0; a < n; a++)
				printf("%d\n", pos[a]);
		}

		if(r == 2){
			for(b = 0; b < n; b++){
				for(a = 0; a < n; a++)
					printf("%d %d\n", pos[b],pos[a]);
			}
		}

		else if(r == 3){
			for(c = 0; c < n; c++){
				for(b = 0; b < n; b++){
					for(a = 0; a < n; a++)
						printf("%d %d %d\n", pos[c], pos[b], pos[a]);
				}
			}
		}

		if(r == 4){
			for(d = 0; d < n; d++){
				for(c = 0; c < n; c++){
					for(b = 0; b < n; b++){
						for(a = 0; a < n; a++)
							printf("%d %d %d %d\n", pos[d], pos[c], pos[b], pos[a]);
					}
				}
			}
		}

		if(r == 5){
			for(e = 0; e < n; e++){
				for(d = 0; d < n; d++){
					for(c = 0; c < n; c++){
						for(b = 0; b < n; b++){
							for(a = 0; a < n; a++)
								printf("%d %d %d %d %d\n", pos[e], pos[d], pos[c], pos[b], pos[a]);
						}
					}
				}
			}
		}

		if(r == 6){
			for(f = 0; f < n; f++){
				for(e = 0; e < n; e++){
					for(d = 0; d < n; d++){
						for(c = 0; c < n; c++){
							for(b = 0; b < n; b++){
								for(a = 0; a < n; a++)
									printf("%d %d %d %d %d %d\n",pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
							}
						}
					}
				}
			}
		}

		if(r == 7){
			for(g = 0; g < n; g++){
				for(f = 0; f < n; f++){
					for(e = 0; e < n; e++){
						for(d = 0; d < n; d++){
							for(c = 0; c < n; c++){
								for(b = 0; b < n; b++){
									for(a = 0; a < n; a++)
										printf("%d %d %d %d %d %d %d\n",pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
								}
							}
						}
					}
				}
			}
		}

		if(r == 8){
			for(h = 0; h < n; h++){
				for(g = 0; g < n; g++){
					for(f = 0; f < n; f++){
						for(e = 0; e < n; e++){
							for(d = 0; d < n; d++){
								for(c = 0; c < n; c++){
									for(b = 0; b < n; b++){
										for(a = 0; a < n; a++)
											printf("%d %d %d %d %d %d %d %d\n",pos[h], pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
									}
								}
							}
						}
					}
				}
			}
		}

		if(r == 9){
			for(i = 0; i < n; i++){
				for(h = 0; h < n; h++){
					for(g = 0; g < n; g++){
						for(f = 0; f < n; f++){
							for(e = 0; e < n; e++){
								for(d = 0; d < n; d++){
									for(c = 0; c < n; c++){
										for(b = 0; b < n; b++){
											for(a = 0; a < n; a++)
												printf("%d %d %d %d %d %d %d %d %d\n",pos[i],pos[h],pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
										}
									}
								}
							}
						}
					}
				}
			}
		}

		if(r == 10){
			for(j = 0; j < n; j++){
				for(i = 0; i < n; i++){
					for(h = 0; h < n; h++){
						for(g = 0; g < n; g++){
							for(f = 0; f < n; f++){
								for(e = 0; e < n; e++){
									for(d = 0; d < n; d++){
										for(c = 0; c < n; c++){
											for(b = 0; b < n; b++){
												for(a = 0; a < n; a++)
													printf("%d %d %d %d %d %d %d %d %d %d\n",pos[j],pos[i],pos[h],pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

void possib_caso2(int n, int r){


	int a, b, c, d, e, f, g, h, i, j;
	int pos[10]={1,2,3,4,5,6,7,8,9,10};

	if(r == 1){
        for(a = 0; a < n; a++)
            printf("%d\n", pos[a]);
		}

	if(r == 2){
        for(b = 0; b < n; b++){
            for(a = 0; a < n; a++){
                if(pos[b] != pos[a])
                    printf("%d %d\n", pos[b],pos[a]);
            }
        }
    }

	if(r == 3){
        for(c = 0; c < n; c++){
            for(b = 0; b < n; b++){
                for(a = 0; a < n; a++){
                    if(pos[c] != pos[b] && pos[c] != pos[a] && pos[b] != pos[a])
                            printf("%d %d %d\n", pos[c], pos[b], pos[a]);
                }
            }
        }
    }

	if(r == 4){
        for(d = 0; d < n; d++){
            for(c = 0; c < n; c++){
                for(b = 0; b < n; b++){
                    for(a = 0; a < n; a++){
                        if(pos[d] != pos[c] && pos[d] != pos[b] && pos[d] != pos [a] && pos[c] != pos[b] && pos[c] != pos[a] && pos[b] != pos[a])
                            printf("%d %d %d %d\n", pos[d], pos[c], pos[b], pos[a]);
                    }
                }
            }
        }
    }

	if(r == 5){
        for(e = 0; e < n; e++){
            for(d = 0; d < n; d++){
                for(c = 0; c < n; c++){
                    for(b = 0; b < n; b++){
                        for(a = 0; a < n; a++){
                            if(pos[e] != pos[d] && pos[e] != pos[c] && pos [e] != pos[b] && pos[e] != pos[a] && pos[d] != pos[c] && pos[d] != pos[b] && pos[d] != pos [a] && pos[c] != pos[b] && pos[c] != pos[a] && pos[b] != pos[a])
                                printf("%d %d %d %d %d\n", pos[e], pos[d], pos[c], pos[b], pos[a]);
                        }
                    }
                }
            }
        }
    }

	if(r == 6){
        for(f = 0; f < n; f++){
            for(e = 0; e < n; e++){
                for(d = 0; d < n; d++){
                    for(c = 0; c < n; c++){
                        for(b = 0; b < n; b++){
                            for(a = 0; a < n; a++){
                                if(pos[f] != pos[e] && pos[f]!= pos[d] && pos[f] != pos[c] && pos[f] != pos[b] && pos[f] != pos[a] && pos[e] != pos[d] && pos[e] != pos[c] && pos [e] != pos[b] && pos[e] != pos[a] && pos[d] != pos[c] && pos[d] != pos[b] && pos[d] != pos [a] && pos[c] != pos[b] && pos[c] != pos[a] && pos[b] != pos[a])
                                    printf("%d %d %d %d %d %d\n",pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                            }
                        }
                    }
                }
            }
        }
    }

	if(r == 7){
        for(g = 0; g < n; g++){
            for(f = 0; f < n; f++){
                for(e = 0; e < n; e++){
                    for(d = 0; d < n; d++){
                        for(c = 0; c < n; c++){
                            for(b = 0; b < n; b++){
                                for(a = 0; a < n; a++){
                                    if(pos[g] != pos[f] && pos[g] != pos[e] && pos[g] != pos[d] && pos[g] != pos[c] && pos[g] != pos[b] && pos[g] != pos[a] && pos[f] != pos[e] && pos[f]!= pos[d] && pos[f] != pos[c] && pos[f] != pos[b] && pos[f] != pos[a] && pos[e] != pos[d] && pos[e] != pos[c] && pos [e] != pos[b] && pos[e] != pos[a] && pos[d] != pos[c] && pos[d] != pos[b] && pos[d] != pos [a] && pos[c] != pos[b] && pos[c] != pos[a] && pos[b] != pos[a])
                                        printf("%d %d %d %d %d %d %d\n",pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

	if(r == 8){
        for(h = 0; h < n; h++){
            for(g = 0; g < n; g++){
                for(f = 0; f < n; f++){
                    for(e = 0; e < n; e++){
                        for(d = 0; d < n; d++){
                            for(c = 0; c < n; c++){
                                for(b = 0; b < n; b++){
                                    for(a = 0; a < n; a++){
                                        if(pos[h] != pos[g] && pos[h] != pos[f] && pos[h] != pos[e] && pos[h] != pos[d] && pos[h] != pos[c] && pos[h] != pos[b] && pos[h] != pos[a] && pos[g] != pos[f] && pos[g] != pos[e] && pos[g] != pos[d] && pos[g] != pos[c] && pos[g] != pos[b] && pos[g] != pos[a] && pos[f] != pos[e] && pos[f]!= pos[d] && pos[f] != pos[c] && pos[f] != pos[b] && pos[f] != pos[a] && pos[e] != pos[d] && pos[e] != pos[c] && pos [e] != pos[b] && pos[e] != pos[a] && pos[d] != pos[c] && pos[d] != pos[b] && pos[d] != pos [a] && pos[c] != pos[b] && pos[c] != pos[a] && pos[b] != pos[a])
                                            printf("%d %d %d %d %d %d %d %d\n",pos[h], pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

	if(r == 9){
        for(i = 0; i < n; i++){
            for(h = 0; h < n; h++){
                for(g = 0; g < n; g++){
                    for(f = 0; f < n; f++){
                        for(e = 0; e < n; e++){
                            for(d = 0; d < n; d++){
                                for(c = 0; c < n; c++){
                                    for(b = 0; b < n; b++){
                                        for(a = 0; a < n; a++){
                                            if(pos[i] != pos[h] && pos[i] != pos[g] && pos[i] != pos[f] && pos[i] != pos[e] && pos[i] != pos[d] && pos[i] != pos[c] && pos[i] != pos[b] && pos[i] != pos[a] && pos[h] != pos[g] && pos[h] != pos[f] && pos[h] != pos[e] && pos[h] != pos[d] && pos[h] != pos[c] && pos[h] != pos[b] && pos[h] != pos[a] && pos[g] != pos[f] && pos[g] != pos[e] && pos[g] != pos[d] && pos[g] != pos[c] && pos[g] != pos[b] && pos[g] != pos[a] && pos[f] != pos[e] && pos[f]!= pos[d] && pos[f] != pos[c] && pos[f] != pos[b] && pos[f] != pos[a] && pos[e] != pos[d] && pos[e] != pos[c] && pos [e] != pos[b] && pos[e] != pos[a] && pos[d] != pos[c] && pos[d] != pos[b] && pos[d] != pos [a] && pos[c] != pos[b] && pos[c] != pos[a] && pos[b] != pos[a])
                                                printf("%d %d %d %d %d %d %d %d %d\n",pos[i],pos[h],pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if(r == 10){
        for(j = 0; j < n; j++){
            for(i = 0; i < n; i++){
                for(h = 0; h < n; h++){
                    for(g = 0; g < n; g++){
                        for(f = 0; f < n; f++){
                            for(e = 0; e < n; e++){
                                for(d = 0; d < n; d++){
                                    for(c = 0; c < n; c++){
                                        for(b = 0; b < n; b++){
                                            for(a = 0; a < n; a++){
                                                if(pos[j] != pos[i] && pos[j] != pos[h] && pos[j] != pos[g] && pos[j] != pos[f] && pos[j] != pos[e] && pos[j] != pos[d] && pos[j] != pos[c] && pos[j] != pos[b] && pos[j] != pos[a] && pos[i] != pos[h] && pos[i] != pos[g] && pos[i] != pos[f] && pos[i] != pos[e] && pos[i] != pos[d] && pos[i] != pos[c] && pos[i] != pos[b] && pos[i] != pos[a] && pos[h] != pos[g] && pos[h] != pos[f] && pos[h] != pos[e] && pos[h] != pos[d] && pos[h] != pos[c] && pos[h] != pos[b] && pos[h] != pos[a] && pos[g] != pos[f] && pos[g] != pos[e] && pos[g] != pos[d] && pos[g] != pos[c] && pos[g] != pos[b] && pos[g] != pos[a] && pos[f] != pos[e] && pos[f]!= pos[d] && pos[f] != pos[c] && pos[f] != pos[b] && pos[f] != pos[a] && pos[e] != pos[d] && pos[e] != pos[c] && pos [e] != pos[b] && pos[e] != pos[a] && pos[d] != pos[c] && pos[d] != pos[b] && pos[d] != pos [a] && pos[c] != pos[b] && pos[c] != pos[a] && pos[b] != pos[a])
                                                    printf("%d %d %d %d %d %d %d %d %d %d\n",pos[j],pos[i],pos[h],pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void possib_caso3(int n, int r){

	int a, b, c, d, e, f, g, h, i, j;
	int pos[10]={1,2,3,4,5,6,7,8,9,10};

    if(r == 1){
        for(a = 0; a < n; a++)
            printf("%d\n", pos[a]);
    }

	if(r == 2){
        for(b = 0; b < n; b++){
            for(a = 0; a < n; a++){
                if(pos[a] >= pos[b])
                    printf("%d %d\n", pos[b], pos[a]);
            }
        }
    }

	if(r == 3){
        for(c = 0; c < n; c++){
            for(b = 0; b < n; b++){
                for(a = 0; a < n; a++){
                    if(pos[a] >= pos[b] && pos[b] >= pos[c])
                        printf("%d %d %d\n", pos[c], pos[b], pos[a]);
                }
            }
        }
    }

	if(r == 4){
        for(d = 0; d < n; d++){
            for(c = 0; c < n; c++){
                for(b = 0; b < n; b++){
                    for(a = 0; a < n; a++){
                            if(pos[a] >= pos[b] && pos[b] >= pos[c] && pos[c] >= pos[d])
                            printf("%d %d %d %d\n", pos[d], pos[c], pos[b], pos[a]);
                    }
                }
            }
        }
    }

	if(r == 5){
        for(e = 0; e < n; e++){
            for(d = 0; d < n; d++){
                for(c = 0; c < n; c++){
                    for(b = 0; b < n; b++){
                        for(a = 0; a < n; a++){
                            if(pos[a] >= pos[b] && pos[b] >= pos[c] && pos[c] >= pos[d] && pos[d] >= pos[e])
                            printf("%d %d %d %d %d\n", pos[e], pos[d], pos[c], pos[b], pos[a]);
                        }
                    }
                }
            }
        }
    }

	if(r == 6){
        for(f = 0; f < n; f++){
            for(e = 0; e < n; e++){
                for(d = 0; d < n; d++){
                    for(c = 0; c < n; c++){
                        for(b = 0; b < n; b++){
                            for(a = 0; a < n; a++){
                                if(pos[a] >= pos[b] && pos[b] >= pos[c] && pos[c] >= pos[d] && pos[d] >= pos[e] && pos[e] >= pos[f])
                                printf("%d %d %d %d %d %d\n",pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                            }
                        }
                    }
                }
            }
        }
    }

	if(r == 7){
        for(g = 0; g < n; g++){
            for(f = 0; f < n; f++){
                for(e = 0; e < n; e++){
                    for(d = 0; d < n; d++){
                        for(c = 0; c < n; c++){
                            for(b = 0; b < n; b++){
                                for(a = 0; a < n; a++){
                                    if(pos[a] >= pos[b] && pos[b] >= pos[c] && pos[c] >= pos[d] && pos[d] >= pos[e] && pos[e] >= pos[f] && pos[f] >= pos[g])
                                    printf("%d %d %d %d %d %d %d\n",pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

	if(r == 8){
        for(h = 0; h < n; h++){
            for(g = 0; g < n; g++){
                for(f = 0; f < n; f++){
                    for(e = 0; e < n; e++){
                        for(d = 0; d < n; d++){
                            for(c = 0; c < n; c++){
                                for(b = 0; b < n; b++){
                                    for(a = 0; a < n; a++){
                                        if(pos[a] >= pos[b] && pos[b] >= pos[c] && pos[c] >= pos[d] && pos[d] >= pos[e] && pos[e] >= pos[f] && pos[f] >= pos[g] && pos[g] >= pos[h])
                                        printf("%d %d %d %d %d %d %d %d\n",pos[h], pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if(r == 9){
        for(i = 0; i < n; i++){
            for(h = 0; h < n; h++){
                for(g = 0; g < n; g++){
                    for(f = 0; f < n; f++){
                        for(e = 0; e < n; e++){
                            for(d = 0; d < n; d++){
                                for(c = 0; c < n; c++){
                                    for(b = 0; b < n; b++){
                                        for(a = 0; a < n; a++){
                                            if(pos[a] >= pos[b] && pos[b] >= pos[c] && pos[c] >= pos[d] && pos[d] >= pos[e] && pos[e] >= pos[f] && pos[f] >= pos[g] && pos[g] >= pos[h] && pos[h] >= pos[i])
                                            printf("%d %d %d %d %d %d %d %d %d\n",pos[i],pos[h],pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

	if(r == 10){
        for(j = 0; j < n; j++){
            for(i = 0; i < n; i++){
                for(h = 0; h < n; h++){
                    for(g = 0; g < n; g++){
                        for(f = 0; f < n; f++){
                            for(e = 0; e < n; e++){
                                for(d = 0; d < n; d++){
                                    for(c = 0; c < n; c++){
                                        for(b = 0; b < n; b++){
                                            for(a = 0; a < n; a++){
                                                if(pos[a] >= pos[b] && pos[b] >= pos[c] && pos[c] >= pos[d] && pos[d] >= pos[e] && pos[e] >= pos[f] && pos[f] >= pos[g] && pos[g] >= pos[h] && pos[h] >= pos[i] && pos[i] >= pos[j])
                                                printf("%d %d %d %d %d %d %d %d %d %d\n",pos[j],pos[i],pos[h],pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void possib_caso4(int n, int r){


	int a, b, c, d, e, f, g, h, i, j;
	int pos[10]={1,2,3,4,5,6,7,8,9,10};

    if(r == 1){
        for(a = 0; a < n; a++)
            printf("%d\n", pos[a]);
    }

	if(r == 2){
        for(b = 0; b < n; b++){
            for(a = 0; a < n; a++){
                if(pos[b] != pos[a] && pos[b] < pos[a])
                    printf("%d %d\n", pos[b],pos[a]);
            }
        }
    }

	if(r == 3){
        for(c = 0; c < n; c++){
            for(b = 0; b < n; b++){
                for(a = 0; a < n; a++){
                    if(pos[c] != pos[b] && pos[c] < pos[b] && pos[c] != pos[a] && pos[c] < pos[a] && pos[b] != pos[a] && pos[b] < pos[a])
                            printf("%d %d %d\n", pos[c], pos[b], pos[a]);
                }
            }
        }
    }

	if(r == 4){
        for(d = 0; d < n; d++){
            for(c = 0; c < n; c++){
                for(b = 0; b < n; b++){
                    for(a = 0; a < n; a++){
                        if(pos[d] != pos[c] && pos[d] < pos[c] && pos[d] != pos[b] && pos[d] < pos[b] && pos[d] != pos[a] && pos[d] < pos[a] && pos[c] != pos[b] && pos[c] < pos[b] && pos[c] != pos[a] && pos[c] < pos[a] && pos[b] != pos[a] && pos[b] < pos[a])
                            printf("%d %d %d %d\n", pos[d], pos[c], pos[b], pos[a]);
                    }
                }
            }
        }
    }

	if(r == 5){
        for(e = 0; e < n; e++){
            for(d = 0; d < n; d++){
                for(c = 0; c < n; c++){
                    for(b = 0; b < n; b++){
                        for(a = 0; a < n; a++){
                            if(pos[e] != pos[d] && pos[e] < pos[d] && pos[e] != pos[c] && pos[e] < pos[c] && pos[e] != pos[b] && pos[e] < pos[b] && pos[e] != pos[a] && pos[e] < pos[a] && pos[d] != pos[c] && pos[d] < pos[c] && pos[d] != pos[b] && pos[d] < pos[b] && pos[d] != pos[a] && pos[d] < pos[a] && pos[c] != pos[b] && pos[c] < pos[b] && pos[c] != pos[a] && pos[c] < pos[a] && pos[b] != pos[a] && pos[b] < pos[a])
                                printf("%d %d %d %d %d\n", pos[e], pos[d], pos[c], pos[b], pos[a]);
                        }
                    }
                }
            }
        }
    }

	if(r == 6){
        for(f = 0; f < n; f++){
            for(e = 0; e < n; e++){
                for(d = 0; d < n; d++){
                    for(c = 0; c < n; c++){
                        for(b = 0; b < n; b++){
                            for(a = 0; a < n; a++){
                                if(pos[f] != pos[e] && pos[f] < pos[e] && pos[f] != pos[d] && pos[f] < pos[d] && pos[f] != pos[c] && pos[f] < pos[c] && pos[f] != pos[b] && pos[f] < pos[b] && pos[f] != pos[a] && pos[f] < pos[a] && pos[e] != pos[d] && pos[e] < pos[d] && pos[e] != pos[c] && pos[e] < pos[c] && pos[e] != pos[b] && pos[e] < pos[b] && pos[e] != pos[a] && pos[e] < pos[a] && pos[d] != pos[c] && pos[d] < pos[c] && pos[d] != pos[b] && pos[d] < pos[b] && pos[d] != pos[a] && pos[d] < pos[a] && pos[c] != pos[b] && pos[c] < pos[b] && pos[c] != pos[a] && pos[c] < pos[a] && pos[b] != pos[a] && pos[b] < pos[a])
                                    printf("%d %d %d %d %d %d\n",pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                            }
                        }
                    }
                }
            }
        }
    }

	if(r == 7){
        for(g = 0; g < n; g++){
            for(f = 0; f < n; f++){
                for(e = 0; e < n; e++){
                    for(d = 0; d < n; d++){
                        for(c = 0; c < n; c++){
                            for(b = 0; b < n; b++){
                                for(a = 0; a < n; a++){
                                    if(pos[g] != pos[f] && pos[g] < pos[f] && pos[g] != pos[e] && pos[g] < pos[e] && pos[g] != pos[d] && pos[g] < pos[d] && pos[g] != pos[c] && pos[g] < pos[c] && pos[g] != pos[b] && pos[g] < pos[b] && pos[g] != pos[a] && pos[g] < pos[a] && pos[f] != pos[e] && pos[f] < pos[e] && pos[f] != pos[d] && pos[f] < pos[d] && pos[f] != pos[c] && pos[f] < pos[c] && pos[f] != pos[b] && pos[f] < pos[b] && pos[f] != pos[a] && pos[f] < pos[a] && pos[e] != pos[d] && pos[e] < pos[d] && pos[e] != pos[c] && pos[e] < pos[c] && pos[e] != pos[b] && pos[e] < pos[b] && pos[e] != pos[a] && pos[e] < pos[a] && pos[d] != pos[c] && pos[d] < pos[c] && pos[d] != pos[b] && pos[d] < pos[b] && pos[d] != pos[a] && pos[d] < pos[a] && pos[c] != pos[b] && pos[c] < pos[b] && pos[c] != pos[a] && pos[c] < pos[a] && pos[b] != pos[a] && pos[b] < pos[a])
                                        printf("%d %d %d %d %d %d %d\n",pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

	if(r == 8){
        for(h = 0; h < n; h++){
            for(g = 0; g < n; g++){
                for(f = 0; f < n; f++){
                    for(e = 0; e < n; e++){
                        for(d = 0; d < n; d++){
                            for(c = 0; c < n; c++){
                                for(b = 0; b < n; b++){
                                    for(a = 0; a < n; a++){
                                        if(pos[h] != pos[g] && pos[h] < pos[g] && pos[h] != pos[f] && pos[h] < pos[f] && pos[h] != pos[e] && pos[h] < pos[e] && pos[h] != pos[d] && pos[h] < pos[d] && pos[h] != pos[c] && pos[h] < pos[c] && pos[h] != pos[b] && pos[h] < pos[b] && pos[h] != pos[a] && pos[h] < pos[a] && pos[g] != pos[f] && pos[g] < pos[f] && pos[g] != pos[e] && pos[g] < pos[e] && pos[g] != pos[d] && pos[g] < pos[d] && pos[g] != pos[c] && pos[g] < pos[c] && pos[g] != pos[b] && pos[g] < pos[b] && pos[g] != pos[a] && pos[g] < pos[a] && pos[f] != pos[e] && pos[f] < pos[e] && pos[f] != pos[d] && pos[f] < pos[d] && pos[f] != pos[c] && pos[f] < pos[c] && pos[f] != pos[b] && pos[f] < pos[b] && pos[f] != pos[a] && pos[f] < pos[a] && pos[e] != pos[d] && pos[e] < pos[d] && pos[e] != pos[c] && pos[e] < pos[c] && pos[e] != pos[b] && pos[e] < pos[b] && pos[e] != pos[a] && pos[e] < pos[a] && pos[d] != pos[c] && pos[d] < pos[c] && pos[d] != pos[b] && pos[d] < pos[b] && pos[d] != pos[a] && pos[d] < pos[a] && pos[c] != pos[b] && pos[c] < pos[b] && pos[c] != pos[a] && pos[c] < pos[a] && pos[b] != pos[a] && pos[b] < pos[a])
                                            printf("%d %d %d %d %d %d %d %d\n",pos[h], pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

	if(r == 9){
        for(i = 0; i < n; i++){
            for(h = 0; h < n; h++){
                for(g = 0; g < n; g++){
                    for(f = 0; f < n; f++){
                        for(e = 0; e < n; e++){
                            for(d = 0; d < n; d++){
                                for(c = 0; c < n; c++){
                                    for(b = 0; b < n; b++){
                                        for(a = 0; a < n; a++){
                                            if(pos[i] != pos[h] && pos[i] < pos[h] && pos[i] != pos[g] && pos[i] < pos[g] && pos[i] != pos[f] && pos[i] < pos[f] && pos[i] != pos[e] && pos[i] < pos[e] && pos[i] != pos[d] && pos[i] < pos[d] && pos[i] != pos[c] && pos[i] < pos[c] && pos[i] != pos[b] && pos[i] < pos[b] && pos[i] != pos[a] && pos[i] < pos[a] && pos[h] != pos[g] && pos[h] < pos[g] && pos[h] != pos[f] && pos[h] < pos[f] && pos[h] != pos[e] && pos[h] < pos[e] && pos[h] != pos[d] && pos[h] < pos[d] && pos[h] != pos[c] && pos[h] < pos[c] && pos[h] != pos[b] && pos[h] < pos[b] && pos[h] != pos[a] && pos[h] < pos[a] && pos[g] != pos[f] && pos[g] < pos[f] && pos[g] != pos[e] && pos[g] < pos[e] && pos[g] != pos[d] && pos[g] < pos[d] && pos[g] != pos[c] && pos[g] < pos[c] && pos[g] != pos[b] && pos[g] < pos[b] && pos[g] != pos[a] && pos[g] < pos[a] && pos[f] != pos[e] && pos[f] < pos[e] && pos[f] != pos[d] && pos[f] < pos[d] && pos[f] != pos[c] && pos[f] < pos[c] && pos[f] != pos[b] && pos[f] < pos[b] && pos[f] != pos[a] && pos[f] < pos[a] && pos[e] != pos[d] && pos[e] < pos[d] && pos[e] != pos[c] && pos[e] < pos[c] && pos[e] != pos[b] && pos[e] < pos[b] && pos[e] != pos[a] && pos[e] < pos[a] && pos[d] != pos[c] && pos[d] < pos[c] && pos[d] != pos[b] && pos[d] < pos[b] && pos[d] != pos[a] && pos[d] < pos[a] && pos[c] != pos[b] && pos[c] < pos[b] && pos[c] != pos[a] && pos[c] < pos[a] && pos[b] != pos[a] && pos[b] < pos[a])
                                                printf("%d %d %d %d %d %d %d %d %d\n",pos[i],pos[h],pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }


	if(r == 10){
        for(j = 0; j < n; j++){
            for(i = 0; i < n; i++){
                for(h = 0; h < n; h++){
                    for(g = 0; g < n; g++){
                        for(f = 0; f < n; f++){
                            for(e = 0; e < n; e++){
                                for(d = 0; d < n; d++){
                                    for(c = 0; c < n; c++){
                                        for(b = 0; b < n; b++){
                                            for(a = 0; a < n; a++){
                                                if(pos[j] != pos[i] && pos[j] < pos[i] && pos[j] != pos[h] && pos[j] < pos[h] && pos[j] != pos[g] && pos[j] < pos[g] && pos[j] != pos[f] && pos[j] < pos[f] && pos[j] != pos[e] && pos[j] < pos[e] && pos[j] != pos[d] && pos[j] < pos[d] && pos[j] != pos[c] && pos[j] < pos[c] && pos[j] != pos[b] && pos[j] < pos[b] && pos[j] != pos[a] && pos[j] < pos[a] && pos[i] != pos[h] && pos[i] < pos[h] && pos[i] != pos[g] && pos[i] < pos[g] && pos[i] != pos[f] && pos[i] < pos[f] && pos[i] != pos[e] && pos[i] < pos[e] && pos[i] != pos[d] && pos[i] < pos[d] && pos[i] != pos[c] && pos[i] < pos[c] && pos[i] != pos[b] && pos[i] < pos[b] && pos[i] != pos[a] && pos[i] < pos[a] && pos[h] != pos[g] && pos[h] < pos[g] && pos[h] != pos[f] && pos[h] < pos[f] && pos[h] != pos[e] && pos[h] < pos[e] && pos[h] != pos[d] && pos[h] < pos[d] && pos[h] != pos[c] && pos[h] < pos[c] && pos[h] != pos[b] && pos[h] < pos[b] && pos[h] != pos[a] && pos[h] < pos[a] && pos[g] != pos[f] && pos[g] < pos[f] && pos[g] != pos[e] && pos[g] < pos[e] && pos[g] != pos[d] && pos[g] < pos[d] && pos[g] != pos[c] && pos[g] < pos[c] && pos[g] != pos[b] && pos[g] < pos[b] && pos[g] != pos[a] && pos[g] < pos[a] && pos[f] != pos[e] && pos[f] < pos[e] && pos[f] != pos[d] && pos[f] < pos[d] && pos[f] != pos[c] && pos[f] < pos[c] && pos[f] != pos[b] && pos[f] < pos[b] && pos[f] != pos[a] && pos[f] < pos[a] && pos[e] != pos[d] && pos[e] < pos[d] && pos[e] != pos[c] && pos[e] < pos[c] && pos[e] != pos[b] && pos[e] < pos[b] && pos[e] != pos[a] && pos[e] < pos[a] && pos[d] != pos[c] && pos[d] < pos[c] && pos[d] != pos[b] && pos[d] < pos[b] && pos[d] != pos[a] && pos[d] < pos[a] && pos[c] != pos[b] && pos[c] < pos[b] && pos[c] != pos[a] && pos[c] < pos[a] && pos[b] != pos[a] && pos[b] < pos[a])
                                                    printf("%d %d %d %d %d %d %d %d %d %d\n",pos[j],pos[i],pos[h],pos[g], pos[f], pos[e], pos[d], pos[c], pos[b], pos[a]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}


int main(){

	char ord, rep;
	int n = 0, r = 0;
	int a = 0, b = 0, c = 0, i;

	printf("\nTrabalho Pratico de Matematica Discreta\n\n\tAnalise combinatoria\n\n\n\nPor favor, entre com os dados abaixo:\n\n");

    printf("\nA ordem dos numeros eh importante?('S' ou 's' para Sim / 'N' ou 'n' para Nao)\n\nOpcao : ");
    scanf("%c", &ord);

    printf("\nEh permitida a repeticao dos numeros?('S' ou 's' para Sim / 'N' ou 'n' para Nao)\nOpcao : ");
    scanf(" %c", &rep);

    while(n <= 0){
        if(a > 0)
            printf("\n\nValor de 'n' invalido! Por favor, insira um valor valido.\n");
        printf("\nQual o numero de elementos do conjunto 'n'? (1 a 10)\n\nOpcao : ");
        scanf("%d", &n);
        a++;
    }

    if(ord == 'N' && rep == 'S' || ord == 'n' && rep == 's'){
        while(r <= 0){
            if(b > 0)
                printf("\n\nValor de 'r' invalido! Por favor, insira um valor valido.\n");
            printf("\nQual o tamanho do conjunto 'r' a ser formado? (r >= 1)\n\nOpcao : ");
            scanf("%d", &r);
            b++;
        }
    }

    else{
        while(r > n || r <= 0){
            if(c > 0)
                printf("\n\nValor de 'r' invalido! Por favor, insira um valor valido.\n");
            printf("\nQual o tamanho do conjunto 'r' a ser formado? (1 <= r <= n)\n\nOpcao : ");
            scanf("%d", &r);
            c++;
        }
    }


	if(ord == 'S' || ord == 's'){

		if(rep == 'S' || rep == 's'){
			printf("\n\nOUTPUT:\n\nPossibilidades: %llu\n\nEnumeracoes:\n", exponencial(n,r));
            possib_caso1(n,r);
		}

		else if(rep == 'N' || rep == 'n'){
			printf("\n\nOUTPUT:\n\nPossibilidades: %llu\n\nEnumeracoes:\n", (fatorial(n) / fatorial(n-r)));
			possib_caso2(n,r);
		}

	}

	else if(ord == 'N' || ord == 'n'){

		if(rep == 'S' || rep == 's'){
			printf("\n\nOUTPUT:\n\nPossibilidades: %llu\n\nEnumeracoes:\n", (fatorial(n+r-1) / (fatorial(r)*fatorial(n-1))));
			possib_caso3(n,r);
		}

		else if(rep == 'N' || rep == 'n'){
			printf("\n\nOUTPUT:\n\nPossibilidades: %llu\n\nEnumeracoes:\n", (fatorial(n) / (fatorial(r)*fatorial(n-r))));
			possib_caso4(n,r);
		}

	}

return 0;
}
