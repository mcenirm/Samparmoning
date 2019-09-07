//
//  AppDelegate.h
//  Samparmoning
//
//  Created by Michael McEniry on 2019-09-06.
//  Copyright © 2019 enuous. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;


@end

