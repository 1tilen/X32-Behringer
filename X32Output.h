/*
 * X32Output.h
 *
 *  Created on: 4 févr. 2015
 *      Author: patrick
 */

#ifndef X32OUTPUT_H_
#define X32OUTPUT_H_




X32command Xoutput[] = {
		{"/outputs",						{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/01",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/01/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/01/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/01/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/01/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/01/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/01/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/02",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/02/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/02/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/02/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/02/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/02/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/02/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/03",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/03/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/03/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/03/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/03/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/03/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/03/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/04",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/04/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/04/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/04/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/04/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/04/delay/on",	{E32}, F_XET, {0}, NULL},
		{"/outputs/main/04/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/05",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/05/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/05/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/05/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/05/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/05/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/05/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/06",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/06/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/06/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/06/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/06/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/06/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/06/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/07",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/07/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/07/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/07/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/07/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/07/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/07/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/08",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/08/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/08/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/08/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/08/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/08/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/08/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/09",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/09/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/09/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/09/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/09/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/09/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/09/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/10",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/10/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/10/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/10/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/10/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/10/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/10/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/11",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/11/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/11/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/11/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/11/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/11/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/11/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/12",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/12/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/12/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/12/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/12/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/12/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/12/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/13",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/13/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/13/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/13/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/13/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/13/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/13/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/14",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/14/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/14/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/14/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/14/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/14/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/14/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/15",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/15/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/15/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/15/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/15/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/15/delay/on",	{E32}, F_XET, {0}, NULL},
		{"/outputs/main/15/delay/time",	{F32}, F_XET, {0}, NULL},
		{"/outputs/main/16",				{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/main/16/src",		{I32}, F_XET, {0}, NULL},
		{"/outputs/main/16/pos",		{E32}, F_XET, {0}, Xotpos},
		{"/outputs/main/16/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/16/delay",			{OMAIND}, F_FND, {0}, NULL},
		{"/outputs/main/16/delay/on",	{E32}, F_XET, {0}, OffOn},
		{"/outputs/main/16/delay/time",	{F32}, F_XET, {0}, NULL},

		{"/outputs/aux/01",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/aux/01/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/aux/01/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/aux/01/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/aux/02",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/aux/02/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/aux/02/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/aux/02/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/aux/03",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/aux/03/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/aux/03/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/aux/03/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/aux/04",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/aux/04/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/aux/04/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/aux/04/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/aux/05",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/aux/05/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/aux/05/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/aux/05/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/aux/06",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/aux/06/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/aux/06/pos",			{E32}, F_XET, {0}, NULL},
		{"/outputs/aux/06/invert",		{E32}, F_XET, {0}, OffOn},


		{"/outputs/p16",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/01",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/01/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/01/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/01/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/01/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/01/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/01/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/01/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/01/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/02",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/02/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/02/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/02/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/02/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/02/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/02/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/02/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/02/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/03",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/03/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/03/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/03/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/03/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/03/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/03/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/03/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/03/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/04",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/04/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/04/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/04/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/04/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/04/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/04/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/04/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/04/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/05",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/05/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/05/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/05/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/05/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/05/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/05/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/05/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/05/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/06",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/06/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/06/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/06/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/06/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/06/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/06/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/06/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/06/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/07",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/07/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/07/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/07/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/07/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/07/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/07/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/07/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/07/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/08",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/08/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/08/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/08/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/08/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/08/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/08/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/08/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/08/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/09",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/09/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/09/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/09/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/09/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/09/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/09/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/09/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/09/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/10",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/10/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/10/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/10/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/10/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/10/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/10/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/10/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/10/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/11",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/11/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/11/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/11/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/11/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/11/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/11/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/11/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/11/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/12",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/12/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/12/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/12/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/12/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/12/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/12/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/12/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/12/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/13",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/13/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/13/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/13/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/13/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/13/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/13/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/13/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/13/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/14",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/14/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/14/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/14/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/14/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/14/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/14/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/14/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/14/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/15",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/15/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/15/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/15/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/15/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/15/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/15/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/15/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/15/iQ/model",	{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/16",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/p16/16/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/p16/16/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/p16/16/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/p16/16/iQ",				{OP16}, F_FND, {0}, NULL},
		{"/outputs/p16/16/iQ/group",	{E32}, F_XET, {0}, XiQgrp},
		{"/outputs/p16/16/iQ/speaker",	{E32}, F_XET, {0}, XiQspk},
		{"/outputs/p16/16/iQ/eq",		{E32}, F_XET, {0}, XiQeq},
		{"/outputs/p16/16/iQ/model",	{I32}, F_XET, {0}, NULL},

		{"/outputs/aes",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/aes/01",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/aes/01/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/aes/01/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/aes/01/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/aes/02",					{OMAIN}, F_FND, {0}, NULL},
		{"/outputs/aes/02/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/aes/02/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/aes/02/invert",		{E32}, F_XET, {0}, OffOn},

		{"/outputs/rec",					{OMAIN2}, F_FND, {0}, NULL},
		{"/outputs/rec/01",					{OMAIN2}, F_FND, {0}, NULL},
		{"/outputs/rec/01/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/rec/01/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/rec/01/invert",		{E32}, F_XET, {0}, OffOn},
		{"/outputs/rec/02",					{OMAIN2}, F_FND, {0}, NULL},
		{"/outputs/rec/02/src",			{I32}, F_XET, {0}, NULL},
		{"/outputs/rec/02/pos",			{E32}, F_XET, {0}, Xotpos},
		{"/outputs/rec/02/invert",		{E32}, F_XET, {0}, OffOn},

};
int Xoutput_max = sizeof(Xoutput) / sizeof(X32command);


#endif /* X32OUTPUT_H_ */
