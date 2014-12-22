//
//  PlayingCard.h
//  Matchismo
//
//  Created by Hughes, Nate on 12/21/14.
//  Copyright (c) 2014 Hughes, Nate. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+(NSArray *)validSuits;
+(NSUInteger)maxRank;

@end
