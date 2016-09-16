//
//  Order+CoreDataProperties.m
//  CoreDataExample
//
//  Created by Dmitriy Arkhipov on 10.09.16.
//  Copyright © 2016 Dmitriy Arkhipov. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Order+CoreDataProperties.h"

@implementation Order (CoreDataProperties)

@dynamic date;
@dynamic made;
@dynamic paid;
@dynamic customer;
@dynamic rowsOfOrder;

@end
