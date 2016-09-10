//
//  Services+CoreDataProperties.h
//  CoreDataExample
//
//  Created by Dmitriy Arkhipov on 10.09.16.
//  Copyright © 2016 Dmitriy Arkhipov. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Services.h"

NS_ASSUME_NONNULL_BEGIN

@interface Services (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *info;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<RowOrder *> *rowsOfOrder;

@end

@interface Services (CoreDataGeneratedAccessors)

- (void)addRowsOfOrderObject:(RowOrder *)value;
- (void)removeRowsOfOrderObject:(RowOrder *)value;
- (void)addRowsOfOrder:(NSSet<RowOrder *> *)values;
- (void)removeRowsOfOrder:(NSSet<RowOrder *> *)values;

@end

NS_ASSUME_NONNULL_END
