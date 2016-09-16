//
//  RowOrder+CoreDataProperties.h
//  CoreDataExample
//
//  Created by Dmitriy Arkhipov on 10.09.16.
//  Copyright © 2016 Dmitriy Arkhipov. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "RowOrder.h"

NS_ASSUME_NONNULL_BEGIN

@interface RowOrder (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *sum;
@property (nullable, nonatomic, retain) NSManagedObject *order;
@property (nullable, nonatomic, retain) NSManagedObject *service;

@end

NS_ASSUME_NONNULL_END
