//
//  SPViewController.m
//  StatisticSdk
//
//  Created by LYZName on 09/29/2019.
//  Copyright (c) 2019 LYZName. All rights reserved.
//

#import "SPViewController.h"
#import <SAMKeychain/SAMKeychain.h>
#import <StatisticSdk/StatisticSdk.h>

@interface SPViewController ()

@end

@implementation SPViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [[SPStatisticSdk sharedInstance] initSdk:@"lifeadvisor-ios" productPublicKey:@"bf54ebf2e8734af2bc1c55187b6032a4" appleId:@"1457000928" abtestId:@"1" channelId:1 afDevKey:@"o6XxR94NFNcyL6NTzsUrRG" isLogEnable:true];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
