//
//  Customer.m
//  CoreDataExample
//
//  Created by Dmitriy Arkhipov on 10.09.16.
//  Copyright © 2016 Dmitriy Arkhipov. All rights reserved.
//

#import "Customer.h"
#import "Order.h"

@implementation Customer

// Insert code here to add functionality to your managed object subclass

- (instancetype) init {
    
    NSManagedObjectContext *managedObjectContext = [CoreDataStack sharedInstance].managedObjectContext;
    
    NSEntityDescription *entityDescription = [NSEntityDescription entityForName:@"Customer" inManagedObjectContext:managedObjectContext];

    self = [super initWithEntity:entityDescription insertIntoManagedObjectContext:managedObjectContext];

    if (self) {
        
        NSLog(@"Customer init");
    }

    return self;
}

@end
